#include "main.h"
/**
* _islower - a function that checks for lowercase character
* @c: code ASCII of character to be checked
* Return: 1 for lowercase or 0 for anything
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
