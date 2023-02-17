#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - This program that describes the last digit of a random number
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n");
	}
	else if (n == 0)
	{
		printf("%d is zero\n");
	}
	else
	{
		printf("%d is negative\n");
	}
	return (0);
}
