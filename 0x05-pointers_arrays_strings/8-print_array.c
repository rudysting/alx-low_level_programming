#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array of integers
 *
 * @a: address of the integer
 * @n: the integer in the array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int c = 0;

	while (n-- > 0)
	{
		printf("%d", a[c++]);
		if (n != 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
