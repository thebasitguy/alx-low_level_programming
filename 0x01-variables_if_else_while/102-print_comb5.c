#include <stdio.h>
/**
 * main - Prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first_num = 0, second_num;

	while (first_num <= 99)
	{
		second_num = first_num;
		while (second_num <= 99)
		{
			if (second_num != first_num)
			{
				putchar((first_num / 10) + 48);
				putchar((first_num % 10) + 48);
				putchar(' ');
				putchar((second_num / 10) + 48);
				putchar((second_num % 10) + 48);

				if (first_num != 98 || second_num != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			second_num++;
		}
		first_num++;
	}
	putchar('\n');
	return (0);
}
