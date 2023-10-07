#include<stdio.h>
/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ones;
	int tens;
	int huns;

	for (huns = '0'; huns <= '9'; huns++)
	{
		for (tens = (huns + 1); tens <= '9'; tens++)
		{
			for (ones = (tens + 1); ones <= '9'; ones++)
			{
				putchar(huns);
				putchar(tens);
				putchar(ones);

				if (huns != '7' || tens != '8' || ones != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
