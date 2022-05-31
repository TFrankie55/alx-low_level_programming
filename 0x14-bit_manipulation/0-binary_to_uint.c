#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: A pointer to a string of 0 and 1 chars
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int j = 0;
	unsigned int num = 0;

	if (b[len] == '\0')
		return (0);

	for (i = 0; b[j]; j++)
		while ((b[j] == '0') || (b[j] == '1'))
	{
		num <<= 1;
		num += b[j] - '0';
		j++;
	}

	return (j);
}
