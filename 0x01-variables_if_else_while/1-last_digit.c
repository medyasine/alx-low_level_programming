#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
int nb = n % 10;
if (n > 5)
{
printf("Last digit of %d is %d and is greater than 5", n, nb);
}
else if (n == 0)
{
printf("Last digit of %d is %d and is 0", n, nb);
}
else if (n < 6 && n != 0)
{
printf("Last digit of %d is -%d and is less than 6 and not 0", n, nb);
}
return (0);
}
