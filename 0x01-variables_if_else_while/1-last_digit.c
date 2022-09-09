#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Function that prints out the kind of number assigned to a variable
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int n;
	int last_digit;
        srand(time(0));
        n = rand() - RAND_MAX / 2;
	last_digit = abs(n%10);
        if (last_digit > 5)
        {
                printf("Last digit of n is %d and is greater than 5\n", last_digit);
        }
        else if (last_digit == 0)
        {
                printf("Last digit of n is %d and is 0\n", last_digit);
        }
        else if (last_digit < 6)
        {
                printf("Last digit of n is %d and is less than 6 and not 0\n", last_digit);
        }
	return (0);
}
