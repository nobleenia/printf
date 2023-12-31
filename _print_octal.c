#include "main.h"

/**
 * print_octal - prints an unsigned int in octal format
 * @n: @args: va_list containing the arguments
 * @buffer: The buffer to write to
 * @flags: Flags for formatting
 * @width: Width specification
 * @prec: Precision specification
 * @size: Size specification
 *
 * Return: number of characters printed
 */
int _print_octal(va_list args, char buffer[], int flags, int width, int prec, int size)
{
int n = BUFFER_SIZE - 2;
unsigned long int num = va_arg(args, unsigned long int);
unsigned long int init_num = num;

num = convert_size_unsigned(num, size);

if (num == 0)
{
buffer[n--] = '0';
}

buffer[BUFFER_SIZE - 1] = '\0';

while (num > 0)
{
buffer[n--] = (num % 8) + '0';
num /= 8;
}
if (flags & F_HASH && init_num != 0)
{
buffer[n--] = '0';
n++;
}

return (write_unsigned(0, n, buffer, flags, width, prec, size));
}
