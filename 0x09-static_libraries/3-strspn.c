#include "main.h"
/**
*_strspn - search the number of bytes in the initial
* segment of s which consist only of bytes from accept
*@s:segment targeted
*@accept:reference bytes container
*
*Return:returns the number of bytes in the initial
* segment of s which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
int j;
while (*s)
{
for (j = 0; accept[j]; j++)
{
if (accept[j] == *s)
{
i++;
break;
}
else if ((accept[j + 1]) == '\0')
return (i);
}
s++;
}
return (i);
}
