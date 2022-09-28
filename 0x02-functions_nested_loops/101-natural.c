#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Program that sums up all numbers less than 1024 divisble by
 * 3 or 5
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int mult = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			mult = i + mult;
		}
	}
	printf("%d\n", mult);
	return (0);
}
