#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *  main - Entry point
 *
 *  Function that prints out the kind of number assigned to a variable
 *
 *  Return: Always 0 (Success)
 */
void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
}
