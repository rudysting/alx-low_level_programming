#include "main.h"

/**
 * _pow_recursion - calculates x raised to power y
 * @x: base
 * @y: exponent
 * Return: pointer to the exponential, or -1 if exponent is less than 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
