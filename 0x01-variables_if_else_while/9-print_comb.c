#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
int n;
n = 0;
while (n < 10)
{
if (n != 9)
{
putchar(n + '0');
putchar(',');
putchar(' ');
n++;
}
else
{
putchar(n + '0');
putchar('$');
n++;
}
}
return (0);
}
