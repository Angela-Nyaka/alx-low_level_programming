#include "main.h"
#include <stdio.h>

/**
*_memcpy- copies memory area.
*@dest: destination memory source to be copied to
*@src: source memory area
*@n: the size of the memory to print
*
*Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
