#include "main.h"

/**
 * _abs - function that returns the absolute value of a number.
 *
 * @ab: parameter representing the actual number.
 *
 * Return: Absolute value
 */
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}

