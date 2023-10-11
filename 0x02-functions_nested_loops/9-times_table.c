#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int row, col, multi;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0;  col <= 9; col++)
		{
			multi = (row * col);

			if (col == 0)
			{
				_putchar('0' + multi);
			}
			else if (multi <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + multi);
			}
			else if (multi > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (multi / 10));
				_putchar('0' + (multi % 10));
			}
		}
		_putchar('\n');
	}
}
