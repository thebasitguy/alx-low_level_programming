#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 
 */

int main(void)
{
	int x = 0, y = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (x < 2772)
	{
		y = rand() % 128;
		if ((x + y) > 2772)
			break;
		x = x + y;
		printf("%c", y);
	}
	printf("%c\n", (2772 - x));
	return (0);
}
