#include <stdio.h>

/**
 * main - A Program to print hexadecimal numbers
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 0; x < 16; x++)
	{
		if (x < 10)
		{
			putchar('0' + x);
		}
		else
		{
			putchar(87 + x);
		}
	}
	putchar('\n');
	return (0);
}
