#include "main.h"

/**
 * print_last_digit - program that prints the last digit in a number
 *
 * @n: the actual number.
 *
 * Return: the number.
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
	{
		last_digit = (-1 * last_digit);
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
