#include "main.h"

/**
 * print_diagonal - prints backslash n number of times
 * @n: no of times the function prints a backslash
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int a;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			a = 1;
			while (a < i)
			{
				_putchar(' ');
				a++;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
