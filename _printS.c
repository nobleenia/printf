#include "main.h"

char to_hex(int val);

/**
 * _printS - phandles the conversion of specifier S (ASCII)
 * @s: the input character
 *
 * Return: ret_val
 */
int _print_S(const char *s)
{
int ret_val = 0;
int a;

for (a = 0; s[a] != '\0'; a++)
{
if (s[a] >= 32 && s[a] < 127)
{
_putchar(s[a]);
ret_val++;
}
else
{
_putchar('\\');
_putchar('x');
_putchar(to_hex((s[a] >> 4) & 0x0F));
_putchar(to_hex(s[a] & 0x0F));
ret_val += 4;
}
}
return (ret_val);
}

/**
 * to_hex - converts to hexadecimal
 * @val: value to be converted
 *
 * Return: the hexa value depending on input value
 */
char to_hex(int val)
{
if (val < 10)
{
return ('0' + val);
}
else
{
return ('A' + (val + 10));
}
}
