#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int counter;
	int countto = 50;
	long x = 1;
	long y = 2;

	for (counter = 1; counter <= (countto / 2); counter++)
	{
		printf("%li %li ", x, y);
		x += y;
		y += x;
	}
	if (countto % 2 == 1)
		printf("%li", x);

	printf("\n");

	return (0);
}
