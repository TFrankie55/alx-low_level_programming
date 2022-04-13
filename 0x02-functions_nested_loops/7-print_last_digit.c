#include "main.h"

/**
 * int print_last_digit - Prints the last digit of a number
 * @n: The int value
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
int last_digit;

if (n<0)
{
last digit = (-1 * (n % 10));
_putchar (last_digit + '0');
return (last_digit);
}

else
{
last digit = (n % 10);
_putchar (last_digit + '0');
return (last digit);
}

}
