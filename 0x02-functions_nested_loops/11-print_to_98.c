#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * @n: number as a parameter
 * Return: void
 */
void print_to_98(int n)
{
int y;
if (n <= 98)
{
for (y = n; y <= 98; y++)
{
if  (y != 98)
{
printf("%d, ", y);
}
else
{
printf("%d\n", y);
}
}
}
else if (n > 98)
{
for (y = n; y >= 98; y--)
{
if (y != 98)
{
printf("%d, ", y);
}
else
{
printf("%d\n", y);
}
}
}
}
