#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int newstr = 0;
	int o;

	while (*s != '\0')
	{
		newstr++;
		s++;
	}
	s--;
	for (o = newstr; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
