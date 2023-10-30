#include "main.h"
/**
* create_array - creates an array of chars, and initializes it with a
*specific char.
*@size: size of the array
*@c:specific character
*
* Return:Pointer to the array else NULL
*/
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i = 0;

str = malloc(size * sizeof(char));

if (size == 0 || str == NULL)
{
return (NULL);
}
for (; i < size; i++)
{
str[i] = c;
}
return (str);
}
