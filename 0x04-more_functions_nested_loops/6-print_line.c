#include "main.h"

/**
 * print_line - prints a line in the terminal
 *
 *@n: No of times to print a dash in stdout
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
