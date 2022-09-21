#include "main.h"

/**
 * puts2 - prints every other character in a string
 *
 * @str: a string of characters
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;
	int l = _strlen(str);

	while (i < l)
	{
		_putchar(*str);
		str += 2;
		i += 2;
	}
	_putchar('\n');
}
/**
 * _strlen - counts the length of a string
 *
 * @s: characters in the string
 * Return: length of a string
 */
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
