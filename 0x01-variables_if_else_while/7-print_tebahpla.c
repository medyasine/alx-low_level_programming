#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
char s;
s = 'z';
while (s >= 'a')
{
putchar(s);
s--;
}
putchar('\n');
return (0);
}
