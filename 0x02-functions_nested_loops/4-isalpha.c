#include "main.h"
/**
 * _isalpha -  function that checks for alphabetic character
 * @c: code ascii of parameter
 * Return: 1 if c is a letter or 0 if anything
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}
