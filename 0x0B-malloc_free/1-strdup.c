#include "main.h"

/**
*_strdup-  returns a pointer to a newly allocated space in memory, which
*contains a copy of the string given as a parameter.
*@str: initial string
*
*Return: pointer to a newly allocated space in memory
*/
char *_strdup(char *str)
{
int i, j = 0;
char *new_str;

if (str == NULL)
{
return (NULL);
}
i = 0;

while (str[i] != '\0')
{
i++;
}
new_str = malloc(sizeof(char) * i + 1);
if (new_str == NULL)
{
return (NULL);
}
for (j = 0; str[j]; j++)
{
new_str[j] = str[j];
}
return (new_str);
}
