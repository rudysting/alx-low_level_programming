#include "main.h"

/**
 * more_numbers - prints all number to 14 in 10 places
 *
 * Return: void
 */
void more_numbers(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');
		}
		i++;
		_putchar('\n');
	}
}

