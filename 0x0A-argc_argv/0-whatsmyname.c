#include "main.h"
#include <stdio.h>

void print_str(char *str);

/**
 * main - print the program name
 * @argc - count of arguments
 * @argv - the array of pointers to the arguments
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{	
	print_str(argv[0]);
	putchar('\n');
	return (0);
}

/**
 * print_str - prints the characters of a string
 * @str - pointer to the string
 * Return: void
 */
void print_str(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
}
