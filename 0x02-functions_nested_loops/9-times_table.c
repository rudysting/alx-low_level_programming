#include "main.h"


/**
 * times_table -  a function that prints the 9 times table starting with 0
 * row_one = row, column_one column, d = digits of current result
 *
 * Return: times table
 */
void times_table(void)
{
	int row_one, column_one, d;

	for (row_one = 0; row_one <= 9; row_one++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (column_one = 1; column_one <= 9; column_one++)
		{
			d = (row_one * column_one);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');
			if (column_one < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

