#include "main.h"

/**
 * *_strncpy - copies  a tring of characters
 * @dest: ppointer to the copied string
 * @src: pointer to the string to be copied
 * @n: integer counting the number of cahracters copied
 * Return: pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
