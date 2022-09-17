#include "main.h"

/**
 * print_triangle - prints triangle on stdout using #
 *
 *@size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			j = size - i;
			k = i;
			while (j > 0)
			{
				_putchar(' ');
				j--;
			}
			while (k > 0)
			{
				_putchar('#');
				k--;
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
