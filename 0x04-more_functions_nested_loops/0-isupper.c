#include "main.h"
/**
 * _isupper - function that checks for uppercase character
 * @c: letter as a parameter
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
int i;
if (c >= 65 && c <= 90)
{
i = 1;
}
else
{
i = 0;
}
return (i);
}
