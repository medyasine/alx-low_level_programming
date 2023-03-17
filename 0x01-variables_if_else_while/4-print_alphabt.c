#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
char s;
s = 'a';
while (s <= 'z')
{
if (s == 'q' || s == 'e')
{
s++;
continue;
}
else
{
putchar(s);
s++;
}
}
putchar('\n');
return (0);
}
