#include "main.h"

/**
 * _islower(intc) - Entry point
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
