#include "main.h"

/**
 * _islower - Entry point
 *
 * c - parameter for checking letter case
 *
 * Return: Integer type.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
