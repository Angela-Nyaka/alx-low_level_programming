#include "main.h"
/**
*puts2-prints every other character of a string, starting with the first
*character, followed by a new line.
*@str: character of a string
* Return : nothing
*/
void puts2(char *str)
{
int length = 0;
int t = 0;
char *y = str;
int i;

while (*y != '\0')
{
y++;
length++;
}
t = length - 1;

for (i = 0; i <= t; i++)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
