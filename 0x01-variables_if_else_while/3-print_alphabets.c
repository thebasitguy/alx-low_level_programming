#include<stdio.h>
/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower_alphabets = 'a';
	char upper_alphabets = 'A';

	while (lower_alphabets <= 'z')
	{
		putchar(lower_alphabets);
		lower_alphabets++;
	}

	while (upper_alphabets <= 'Z')
	{
		putchar(upper_alphabets);
		upper_alphabets++;
	}

	putchar('\n');
	return (0);
}
