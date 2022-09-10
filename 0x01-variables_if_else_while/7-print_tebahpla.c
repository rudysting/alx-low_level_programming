#include <stdio.h>

/**
 * main - Entry point
 *
 * Function that prints alphabets in reverse order
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
