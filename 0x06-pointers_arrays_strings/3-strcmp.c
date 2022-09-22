#include "main.h"

/**
 * _strcmp - Compares strings s1 and s2
 *
 * @s1: String 1 to be compared
 * @s2: String 2 to be compared
 *
 * Return: Difference between s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] == s2[i]) && (s1[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
