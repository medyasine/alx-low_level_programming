#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer
 * @n:the number as a parameter
 * Return: the absolute value of n
 */
int _abs(int n)
{
int absv;
if (n >= 0)
{
return (n);
}
else
{
absv = n * -1;
return (absv);
}
}
