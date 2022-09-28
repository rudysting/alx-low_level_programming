#include "main.h"

/**
 * _isalpha - Program that checks for alphabets
 *
 * @c: parameter for counting.
 *
 * Return: Integer depending on the outcome.
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
