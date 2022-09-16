#include "main.h"

/**
 * print_square - prints a square on the screen using #
 *
 * @size: the size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int i;
	int j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
