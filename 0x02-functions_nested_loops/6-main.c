#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	    int r;

	    r = _abs(-1);
	    _putchar(r % 10 + '0');
	    r = _abs(0);
	    _putchar(r % 10 + '0');
	    r = _abs(1);
	    _putchar(r % 10 + '0');
	    r = _abs(-1);
	    _putchar(r % 10 + '0');
	    return (0);
}
