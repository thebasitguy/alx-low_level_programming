#include<stdio.h>
/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower_case = 'a';

	while (lower_case <= 'z')
	{
		if (lower_case != 'q' && lower_case != 'e')
		{
			putchar(lower_case);
		}
		lower_case++;
	}


	putchar('\n');

	return (0);
}
