#include "main.h"
#include <stdio.h>

/**
 * rev_string - reversing a string of characters
 *
 * @s: placeholder for the characters
 *
 * Return: void
 */
void rev_string(char *s)
{
	char *t = s;
	char n[1000];
	short c = 0;

	while (*s != '\0')
	{
		n[c] = *s;
		s++;
		c++;
	}
	c = 0;

	while (s > t)
	{
		s--;
		*s = n[c];
		c++;
	}
}
