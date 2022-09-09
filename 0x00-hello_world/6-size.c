#include <stdio.h>

/**
 * A program that prints data types of the running machine
 *
 * The main program prints various data types for this machine
 *
 * Return: Always 0
 */
int main (void)
{
	int a;
	char b;
	long int c;
	long long int d;
	float e;


	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}
