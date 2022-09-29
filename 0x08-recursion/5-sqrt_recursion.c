#include "main.h"

/**
 * _sqrt_recursion - find the natural square root
 * @n: an integer
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find the square root
 * @n: integer to find the square root
 * @val: square root
 * Return: an integer
 */
int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
