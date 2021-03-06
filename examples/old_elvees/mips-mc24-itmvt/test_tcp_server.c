/*
 * Testing TCP protocol: server side.
 */
#include <runtime/lib.h>
#include <mem/mem.h>
#include <net/route.h>
#include <net/ip.h>
#include <net/tcp.h>
#include <timer/timer.h>
/*#include <tap/tap.h>*/

#define MEM_SIZE	15000

ARRAY (task, 6000);
ARRAY (group, sizeof(mutex_group_t) + 4 * sizeof(mutex_slot_t));
char memory [MEM_SIZE];
mem_pool_t pool;
/*tap_t tap;*/
route_t route;
timer_t timer;
ip_t ip;

void main_task (void *data)
{
	tcp_socket_t *lsock, *sock;
	unsigned short serv_port = 2222;
	char buffer [256];

	debug_printf ("Server started on port %d\n", serv_port);
	lsock = tcp_listen (&ip, 0, serv_port);
	if (! lsock) {
		debug_printf ("Error on listen, aborted\n");
		uos_halt (0);
	}
	for (;;) {
		sock = tcp_accept (lsock);
		if (! sock) {
			debug_printf ("Error on accept\n");
			break;
		}
		if (tcp_read (sock, buffer, 256) < 0)
			debug_printf ("Error reading from socket\n");
		else {
			buffer[255] = 0;
			debug_printf ("Here is the message: %s\n", buffer);
			if (tcp_write (sock, "I got your message\n", 20) < 0)
				debug_printf ("Error writing to socket\n");
		}
		tcp_close (sock);
	}
	tcp_close (lsock);
	debug_printf ("Server finished\n");
	uos_halt (0);
}

void uos_init (void)
{
	mutex_group_t *g;
/*	unsigned char my_ip[] = "\310\0\0\2";*/

	timer_init (&timer, KHZ, 10);
	mem_init (&pool, (size_t) memory, (size_t) memory + MEM_SIZE);

	/*
	 * Create a group of two locks: timer and tap.
	 */
	g = mutex_group_init (group, sizeof(group));
/*	mutex_group_add (g, &tap.netif.lock);*/
	mutex_group_add (g, &timer.decisec);
	ip_init (&ip, &pool, 70, &timer, 0, g);

	/*
	 * Create interface tap0 200.0.0.2 / 255.255.255.0
	 */
/*	tap_init (&tap, "tap0", 80, &pool, 0);*/
/*	route_add_netif (&ip, &route, my_ip, 24, &tap.netif);*/

	task_create (main_task, 0, "main", 1, task, sizeof (task));
}
