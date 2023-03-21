#include "main.h"
/**
 * print_alphabet_x10 - function that prints 10 times the alphabet
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
int nb;
for (nb = 0; nb < 10; nb++)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
}
}
