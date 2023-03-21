#include "main.h"
/**
 * print_sign - function that prints the sign of a number
 * @n: number which checked
 * Return: 1 if n great than 0 or 0 if n is 0 or -1 if n less than 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
