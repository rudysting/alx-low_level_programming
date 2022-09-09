#include <stdio.h>

/**
 * Beginning of code
 *
 * This program prints various data types on this computer
 *
 * Returns 0
 */
int main (void)
{
	int a;
	char b;
	long int c;
	long long int d;
	float e;


	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}
