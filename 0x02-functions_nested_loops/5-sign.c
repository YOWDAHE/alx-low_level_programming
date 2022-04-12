#include "main.h"
/**
 * print_sign - print the sign of a number
 * Return: 1 if n is greater than zero
 * @n: the number to check
 * 0 if n is zero
 * -1 if n is less than zero
 * 0 if n is zero
 */
int print_sign(int n)
{
int sign = 0;
if (n > 0)
{
sign = 1;
_putchar('+');
}
else if (n < 0)
{
sign = -1;
_putchar('-');
}
else
{
sign = 0;
_putchar('0');
}
return (sign);
}
