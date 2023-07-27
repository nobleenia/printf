#include "main.h"

/**
 * print_rot13 - prints a rot13'ed string
 * @str: input string to be printed in rot13
 *
 * Return: number of characters printed
 */
int print_rot13(char *str)
{
int ret_val = 0;
int n = 0;
char c;

char *rot13_out = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (n = 0; str[n]; n++)
{
c = str[n];
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
{
ret_val += _putchar(rot13_out[c - (c >= 'a' ? 'a' : 'A')]);
}
else
{
ret_val += _putchar(c);
}
}
return (ret_val);
}
