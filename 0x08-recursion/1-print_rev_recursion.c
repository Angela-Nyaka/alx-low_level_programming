#include "main.h"
/**
*_print_rev_recursion- _print_rev_recursion
*@s: string
*
*Return: Always 1 (Success)
*/
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
