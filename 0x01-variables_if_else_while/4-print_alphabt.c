#include <stdio.h>

/**
 * main - Program to print all aphabets except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'q' && x != 'e')
		{
			putchar(x);
		}
	}
	putchar('\n');
	return (0);
}
