#include "main.h"

/**
 * print_escaped_str - print string with escaped non-printable characters
 * @str: input string to be printed
 *
 * Return: number of characters printed
 */
int print_esc_str(char *str)
{
int ret_val = 0;
char c;

while (*str)
{
c = *str;
if (c < 32 || c >= 127)
{
ret_val += _putchar('\\');
ret_val += _putchar('x');
ret_val += print_hex((unsigned char)c);
}
else
{
ret_val += _putchar(c);
}
str++;
}
return (ret_val);
}
