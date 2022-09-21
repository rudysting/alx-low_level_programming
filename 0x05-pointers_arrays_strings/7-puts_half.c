#include "main.h"

/**
 * puts_half - prints the second half of a string of characters
 * @str: string of characters
 * Return: void
 */
void puts_half(char *str)
{
	int len;
	int n;
	int i;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (len % 2)
	{
		for (n = (len - 1) / 2; n < len - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
