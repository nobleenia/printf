#include "main.h"

/**
 * print_octal - prints an unsigned int in octal format
 * @n: the input integer to be printed
 *
 * Return: number of characters printed
 */
int print_octal(unsigned int n)
{

int ret_val = 0;
unsigned int mask = 0x1FFFFFFF;
int zero = 0;
int octate;

while (mask > 0)
{
octate = (n & mask) >> (mask == 1 ? 0 : 28);
if (octate != 0 || zero || mask == 1)
{
ret_val += _putchar(octate + '0');
zero = 1;
}

mask >>= 3;
}
return (ret_val);
}
