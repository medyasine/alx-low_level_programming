#include "main.h"
/**
 * _isdigit - function that checks for a digit (0 through 9)
 * @c: number as parameter
 * Return: 1 if c is a digit or 0 otherwise
 */
int _isdigit(int c)
{
int i;
if (c >= 48 && c <= 57)
{
i = 1;
}
else
{
i = 0;
}
return (i);
}
