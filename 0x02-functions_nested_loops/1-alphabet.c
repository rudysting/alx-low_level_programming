#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int lcl;

	for (lcl = 'a'; lcl <= 'z'; lcl++)
	{
		_putchar(lcl);
	}
	_putchar('\n');
}
