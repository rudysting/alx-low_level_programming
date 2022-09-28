#include "main.h"
#include <stdio.h>

/**
 * swap_int - interchanges the values of two integers
 *
 * @a: pointer to an integer type
 * @b: pointer to an integer type
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
