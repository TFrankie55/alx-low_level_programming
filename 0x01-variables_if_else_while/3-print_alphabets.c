#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the letters in lower then uppercase
 *
 * Return: Always 0
 */

int main(void)
{
	int i, j;

	i = 97;
	j = 65;

	while (i < 123)
	{
		putchar(i);
		i++;
	}

	while (j < 91)
	{
		putchar(j);
		j++;
	}

	putchar(10);

	return (0);
}
