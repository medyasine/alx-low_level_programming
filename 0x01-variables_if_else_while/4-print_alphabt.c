#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
char s;
s = 'q';
while (s <= 'e')
{
putchar(s);
s--;
}
putchar('\n');
return (0);
}
