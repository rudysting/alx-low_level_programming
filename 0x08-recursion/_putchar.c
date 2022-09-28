#include <unistd.h>

/**
 * _putchar - prints only one character at a time
 * @c: character being printed
 * Return: Nothing.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
