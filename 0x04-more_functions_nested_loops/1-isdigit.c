#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check if the parameter c represents a digit
 * @c: int representing an ascii character
 * Return: 1 if it s a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
