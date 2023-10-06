#include <stdio.h>
#include <unistd.h>

/**
* main - Print alphabet letters in lower case
*
* Return: Always 1 (Success)
*/
int main(void)
{
char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i < 26; i++)
{
putchar(alpha[i]);
}
putchar('\n');
return (0);
}
