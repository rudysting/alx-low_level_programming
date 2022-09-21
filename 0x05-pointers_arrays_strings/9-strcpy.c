#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies string from source pointer to a destination pointer
 * @dest: destination pointer
 * @src: source pointer
 * Return: string at the destination pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
