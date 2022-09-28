#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings together
 * @src: string to append to another
 * @dest: string to be appended to
 * @n: maximum number of bytes usable
 * Return: pointer to destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] += src[j];
		i++;
		j++;
	}
	dest += '\0';
	return (dest);
}
