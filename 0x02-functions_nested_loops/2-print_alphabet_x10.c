#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int lcl;
	int count;

	for (count = 0; count <= 9; count++)
	{
		for (lcl = 'a'; lcl <= 'z'; lcl++)
		{
			_putchar(lcl);
		}
		_putchar('\n');
	}
}
