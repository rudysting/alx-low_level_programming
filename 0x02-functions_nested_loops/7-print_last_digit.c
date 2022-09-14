#include "main.h"

/**
 * print_last_digit - program that prints the last digit in a number
 *
 * @last_digit: the actual number.
 *
 * Return: the number.
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (n < 0)
	{
		n = (-1 * n);
	}
	_putchar(last_digit + '0');
	return (0);
}
