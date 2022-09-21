#include "main.h"

/**
 * print_rev -  prints a string of characters in reverse order
 *
 * @s: the string characters
 *
 * Return: void
 */
void print_rev(char *s)
{
	int _strlen(char *s);
	int i;
	int l = _strlen(s);
	
	for (i = l - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}
