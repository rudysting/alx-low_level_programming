#include "main.h"

/**
 * print_times_table - program that prints times table for
 * numbers up to 15
 *
 * @n: variable whose times table is to be printed
 *
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int row, column;

	for (row = 0; row <= n; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (column = 1; column <= n; column++)
		{
			n = (row * column);
			if ((n / 10) > 0)
			{
				_putchar((n / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((n % 10) + '0');
			if ((column >= 1) && (column < n))
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	return;
}
