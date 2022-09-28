#include "main.h"

/**
 * _puts_recursion - using recursion to print a string
 * @s: character in the string to be recursively printed.
 * Return: Nothing.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
