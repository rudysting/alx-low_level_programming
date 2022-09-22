#include "main.h"

/**
 * reverse_array - Function that reverses an array of integers
 *
 * @a: a is the array
 * @n: n is the number of elements in the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	n = n - 1;
	while (i <= n)
	{
		temp = a[i];
		a[i++] = a[n];
		a[n--] = temp;
	}
}
