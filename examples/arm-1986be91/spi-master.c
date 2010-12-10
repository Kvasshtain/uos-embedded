/*
 * Testing SPI master.
 */
#include <runtime/lib.h>
#include <kernel/uos.h>
#include <stream/stream.h>
#include <gpanel/gpanel.h>
#include <milandr/spi.h>
#include "board-1986be91.h"

/*
 * Скорость передачи в килобитах в секунду.
 * Должна быть как минимум в 12 раз ниже частоты
 * процессора KHZ - так сказано в спецификации микросхемы.
 */
#define KBIT_PER_SEC	4000

gpanel_t display;
spi_t spi;

ARRAY (stack_console, 1000);

/*
 * Отображение состояния теста на LCD.
 */
void display_refresh (unsigned sent, unsigned received)
{
	gpanel_clear (&display, 0);
	printf (&display, "SPI мастер: 5600ВГ1У\r\n");
	printf (&display, " Процессор: %d.%d МГц\r\n", KHZ/1000, KHZ/100%10);
	printf (&display, "  Кбит/сек: %d\r\n", spi.kbps);
	printf (&display, "  Передано: %lu\r\n", spi.out_packets);
	printf (&display, "   Принято: %lu\r\n", spi.in_packets);
	printf (&display, "Прерываний: %lu\r\n", spi.intr);
	if (sent != ~0) {
		printf (&display, "Отправлено: '%c'\r\n", sent);
		if (received >= ' ' && received <= '~')
			printf (&display, "   Обратно: '%c'\r\n", received);
		else
			printf (&display, "   Обратно: %04x\r\n", received);
	}
}

/*
 * Отправка слова по SPI, получение ответа и отображение на дисплее.
 */
void send_receive (unsigned sent)
{
	unsigned received;

	spi_output (&spi, sent);

	/* Ждём в течение 16 битовых интервалов. */
	udelay (1 + 16 * 1000 / KBIT_PER_SEC);
	if (! spi_input (&spi, &received))
		received = ~0;
	display_refresh (sent, received);
}

/*
 * Задача опрашивает кнопки и генерит транзакции по SPI.
 */
void task_console (void *data)
{
	unsigned up_pressed = 0, left_pressed = 0, select_pressed = 0;
	unsigned right_pressed = 0, down_pressed = 0;

	for (;;) {
		mdelay (20);

		if (! joystick_up ())
			up_pressed = 0;
		else if (! up_pressed) {
			up_pressed = 1;

			/* Up */
			send_receive ('U');
		}

		if (! joystick_down ())
			down_pressed = 0;
		else if (! down_pressed) {
			down_pressed = 1;

			/* Down */
			send_receive ('D');
		}

		if (! joystick_left ())
			left_pressed = 0;
		else if (! left_pressed) {
			left_pressed = 1;

			/* Left */
			send_receive ('L');
		}

		if (! joystick_right ())
			right_pressed = 0;
		else if (! right_pressed) {
			right_pressed = 1;

			/* Right. */
			send_receive ('R');
		}

		if (! joystick_select ())
			select_pressed = 0;
		else if (! select_pressed) {
			select_pressed = 1;

			/* Select. */
			send_receive ('S');
		}
	}
}

void uos_init (void)
{
	buttons_init ();

	/* Use LCD panel for display. */
	extern gpanel_font_t font_fixed6x8;
	gpanel_init (&display, &font_fixed6x8);

	/* SPI2, 16-bit words, master at 1 Mbit/sec. */
	spi_init (&spi, 1, 16, 1000000 / KBIT_PER_SEC);
	display_refresh (~0, ~0);

	task_create (task_console, 0, "console", 10,
		stack_console, sizeof (stack_console));
}
