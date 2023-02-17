#include <stdio,h>

/**
 * main - Program to print numbers below 10using only put-char
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
	}
	putchar('\n');
	return (0);
}
