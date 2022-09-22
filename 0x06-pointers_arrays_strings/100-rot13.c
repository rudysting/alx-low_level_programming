#include "main.h"
#include <stdio.h>

/**
 * rot13 - Rotation-13 cipher
 * @s: pointer to string parameters
 *
 * Return: the rotated string
 */
char *rot13(char *s)
{
	int i;
	int j;
	char string[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char stringrot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == string[j])
			{
				s[i] = stringrot[j];
				break;
			}
		}
	}
	return (s);
}
