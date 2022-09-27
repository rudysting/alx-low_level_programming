#include "main.h"

/**
 * _strstr - locates the occurence of the substring 'needle'in 'haystack'
 * @haystack: string to be searched
 * @needle: pointer to a substring being compared
 * Return: pointer to the matching string
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] > '\0'; i++)
	{
		for (j = i; haystack[j] > '\0' && needle[j - i] > '\0'; j++)
		{
			if (haystack[j] != needle[j - i])
			{
				break;
			}
		}
		if (needle[j - i] == '\0')
		{
			return (haystack + i);
		}
	}
	return (0);
}
