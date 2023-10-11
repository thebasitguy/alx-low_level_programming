#include "main.h"
#include<stdio.h>
/**
 * print_to_98 -  prints all natural numbers from n to 98
 * @n: integer argument
 */
void print_to_98(int n)
{
	for (n = 0; n < 98; n++)
	{
		printf("%d, ", n);
	}
	for (n = 0; n > 98; n--)
	{
		printf("%d, ", n);
	}
	if (n == 98)
	{
		printf("%d", n);
	}
	printf("\n");
}
