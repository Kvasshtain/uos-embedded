/*
 * Testing UART.
 */
#include <runtime/lib.h>
#include <kernel/uos.h>
#include <uart/uart.h>

ARRAY (task, 400);
uart_t uart;

void hello (void *data)
{
	puts (&uart, "\nTesting UART.");
	for (;;) {
		printf (&uart, "\nHello, World! ");
		getchar (&uart);
	}
}

void uos_init (void)
{
	uart_init (&uart, 0, 90, KHZ, 9600);
	task_create (hello, 0, "hello", 1, task, sizeof (task));
}
