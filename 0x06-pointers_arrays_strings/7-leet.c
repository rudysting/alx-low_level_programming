#include "main.h"

/**
 * leet - Encodes a string in leet
 *
 * @str: String to be encoded
 *
 * Return: encoded string
 */
char *leet(char *str)
{
	int i = 0;
	int k;
	char s[] = "aAeEoOtTlL";
	char s1[] = "4433007711";

	for (; str[i] != '\0'; i++)
	{
		for (k = 0; k <= 9; k++)
		{
			if (s[k] == str[i])
			{
				str[i] = s1[k];
			}
		}
	}
	return (str);
}
