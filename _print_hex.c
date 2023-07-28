#include "main.h"

/**
 * print_hex - prints hexadecimals
 * @n: the input integer
 *
 * Return: hexadecimal value of input
 */
int print_hex(uintptr_t ptr)
{
int ret_val = 0;
char hex_digits[] = "0123456789abcdef";
int num_digits = (sizeof(uintptr_t) * 2);
int i;
int non_zero = 0;
char digit;

if (ptr == 0)
{
ret_val += _putchar('0');
return (ret_val);
}

if (num_digits < 12)
{
num_digits = 12;
}

for (i = num_digits - 1; i >= 0; i--)
{
digit = hex_digits[(ptr >> (i * 4)) & 0xF];
if (digit != '0' || non_zero || i == 0)
{
ret_val += _putchar(digit);
non_zero = 1;
}
}

return (ret_val);
}
