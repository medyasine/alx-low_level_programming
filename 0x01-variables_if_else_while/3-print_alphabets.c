#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
char s;
char ss;
s = 'a';
while (s <= 'z')
{
putchar(s);
s++;
}
ss = 'A';
while (ss <= 'Z')
{
putchar(ss);
ss++;
}
putchar('\n');
return (0);
}
