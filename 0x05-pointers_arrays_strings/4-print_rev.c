#include "main.h"
/**
*print_rev-  prints a string, in reverse, followed by a new line
*@s: string to be reversed
* Return : nothing
*/
void print_rev(char *s)
{
int start = 0;

while (s[start])
start++;
while (start--)
_putchar(s[start]);
_putchar('\n');
}
