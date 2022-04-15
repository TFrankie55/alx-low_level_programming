#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Checks for a digit (0 through 9)
 * @num: int to be checked
 * Return: 1 if num is a digit, otherwise 0
 */

int _isdigit(int num)
{
	return (num >= '0' && num <= '9');
}
