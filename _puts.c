#include "main.h"

/**
 * puts - prints the characters in an array of strings
 * @s: the strings to be printed
 *
 * Return: non-negative number
 */
int _puts(const char *s)
{
  int a;
  int ret_val = 0;

for (a = 0; s[a] != '\0'; a++)
{
_putchar(s[a]);
ret_val++;
}
return (ret_val);
}
