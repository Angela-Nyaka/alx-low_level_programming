#include "main.h"
/**
 * _islower(int c)-checks for lowercase character.
 * @c: charcater to be checked
 *
 * Return: 1 if c is lowercase otherwise 0
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
