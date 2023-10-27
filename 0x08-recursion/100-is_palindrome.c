#include "main.h"
int check_palindrome(char *s, int i, int len);
int _strlen_recursion(char *s);
/**
*is_palindrome- checks if string is a palindrome
*@s: string
*
*Return: 1 if palindrome else 0
*/
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (check_palindrome(s, 0, _strlen_recursion(s)));
}
/**
*_strlen_recursion- return length of string
*@s: string
*
*Return: length of s
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
/**
*check_palindrome- check for palindrome
*@s: string to check
*@i: for looping
*@len: length of string
*
*Return: 1 if palindrome else 0
*/
int check_palindrome(char *s, int i, int len)
{
if (*(s + i) != *(s + len -1))
return (0);
if (i >= len)
return- (1);
return (check_palindrome(s, i + 1 , len - 1));
}
