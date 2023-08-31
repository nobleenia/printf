#include "main.h"

/**
 * _print_hexa_up_low - Print an unsigned integer in hexadecimal format
 * @args: va_list containing the arguments
 * @mask: The mask to use for the hex conversion (lower/upper case)
 * @buffer: The buffer to write to
 * @flags: Flags for formatting
 * @flag_ch: The character representing the flag (e.g., 'x' or 'X')
 * @width: Width specification
 * @prec: Precision specification
 * @size: Size specification
 *
 * Return: Number of characters printed
 */
int _print_hexa_up_low(va_list args, char mask[], char buffer[], int flags, char flag_ch, int width, int prec, int size)
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
buffer[n--] = mask[num % 16];
num /= 16;
}

if (flags & F_HASH && init_num != 0)
{
buffer[n--] = flag_ch;
buffer[n--] = '0';
}

n++;

return (write_unsigned(0, n, buffer, flags, width, prec, size));

}
