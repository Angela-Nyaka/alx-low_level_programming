#include "main.h"
/**
*rev_string- reverses a string
*@s: string to be reversed
* Return : nothing
*/
void rev_string(char *s)
{

char rev_string = s[0];
int counter = 0;
int i;

while (s[counter] != '\0')
counter++;
for (i = 0; i < counter; i++)
{
counter--;
rev_string = s[i];
s[i] = s[counter];
s[counter] = rev_string;
}
}
