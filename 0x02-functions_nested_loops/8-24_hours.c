#include "main.h"
/**
 * jack_bauer - print every minute of a day
 * Description: print minutes 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hours = 0;
	int mins = 0;

	for (hours = 0; hours < 24; hours++)
	{
		for (mins = 0; mins < 60; mins++)
		{
			_putchar('0' + (hours / 10));
			_putchar('0' + (hours % 10));
			_putchar(':');
			_putchar('0' + (mins / 10));
			_putchar('0' + (mins % 10));
			_putchar('\n');
		}
	}
}
