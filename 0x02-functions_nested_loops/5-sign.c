#include "main.h"

/**
 * print_sign() - program that checks for the sign of a number
 *
 * @n: counter for the printed numbers
 *
 * Return: Variable depending on the sign of the number
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
