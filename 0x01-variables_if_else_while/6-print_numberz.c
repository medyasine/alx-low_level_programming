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
putchar(n + '0');
n++;
}
putchar('\n');
return (0);
}
