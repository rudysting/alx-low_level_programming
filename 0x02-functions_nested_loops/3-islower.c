#include "main.h"

/**
 * _islower - A function that checks for lowercase characters
 *
 * @c: parameter for checking letter case
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
