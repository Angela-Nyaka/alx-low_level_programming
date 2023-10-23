#include "main.h"
#include <stdio.h>

/**
*_memset- fills memory with a constant byte.
*@s:Starting address of memory to be filled
*@b: Value to be filled
*@n:Number of bytes to be filled
*
*Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
