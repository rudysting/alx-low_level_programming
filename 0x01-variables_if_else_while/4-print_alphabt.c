#include <stdio.h>

/**
 * main - Entry point
 *
 * Function that prints lowercase characters except two of them
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 'a';
	while ( x <= 'z' )
	{
		if (x != 'q' && x != 'e')
		{
			putchar(x);
		}
		x++;
	}
	putchar('\n');
	return (0);
}
