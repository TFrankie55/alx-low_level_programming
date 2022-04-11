#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the letters of the alphabet except q, e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar (c);
		}
	}
	putchar('\n');

	return (0);
}
