#include "main.h"

/**
 * puts - prints the characters in an array of strings
 * @s: the strings to be printed
 *
 * Return: non-negative number
 */
int _puts(char *str)
{
int len = 0;

while (str[len])
{
if (_putchar(str[len]) == -1)
{
return (-1);
}
 len++;
}
return (len);
}
