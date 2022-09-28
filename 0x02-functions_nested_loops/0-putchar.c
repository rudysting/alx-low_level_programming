#include "main.h"

/**
 * main - Entry point
 *
 * Print putchar
 *
 * Return: Zero this time (0)
 */
int main(void)
{
	char *c = "_putchar";

	while (*c)
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');
	return (0);
}
