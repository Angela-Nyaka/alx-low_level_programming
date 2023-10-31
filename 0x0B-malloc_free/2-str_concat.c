#include "main.h"
/**
*str_concat- concatenates two strings
*@s1: string 1
*@s2: string 2
*
*Return: pointer to newly allocated memory
*/
char *str_concat(char *s1, char *s2)
{
char *result;
int i, j;

if (s1 == NULL)
{
	s1 = "";
}
if (s2 == NULL)
{
	s2 = "";
}
i = j = 0;

while (s1[i] != '\0')
{
	i++;
}
while (s2[j] != '\0')
{
	j++;
}
result = malloc(sizeof(char) * (i + j + 1));
if (result == NULL)
{
	return (NULL);
}
i = j = 0;

while (s1[i] != '\0')
{
	result[i] = s1[i];
	i++;
}
while (s2[j] != '\0')
{
	result[i] = s2[j];
	i++, j++;
}
result[i] = '\0';
return (result);
}
