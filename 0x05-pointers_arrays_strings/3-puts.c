#include "main.h"

/**
 * _puts  - prints a string of characters
 *
 * @str: the placeholder for the character in the string
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
