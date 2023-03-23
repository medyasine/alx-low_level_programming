#include "main.h"
/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
int i;
int u;
for (i = 0; i < 10; i++)
{
for (u = 0; u <= 14; u++)
{
if (u >= 10)
{
_putchar((u / 10) + '0');
}
_putchar((u % 10) + '0');
}
_putchar('\n');
}
}
