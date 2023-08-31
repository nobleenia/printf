#include "main.h"

/**
 * _print_pointer - Print a pointer address in hexadecimal format
 * @args: va_list containing the arguments
 * @buffer: The buffer to write to
 * @flags: Flags for formatting
 *
 * Return: Number of characters printed
 */
int _print_pointer(va_list args, char buffer[], int flags, int width, int prec, int size)
{
char more_char = 0, padding = ' ';
int index = BUFFER_SIZE - 2;
int len = 2;
int init_padding = 1;
unsigned long num;
char mask[] = "0123456789abcdef";
void *loc = va_arg(args, void *);
int ret_val;

UNUSED(prec);
UNUSED(size);

if (loc == NULL)
{
return (write(1, "(nil)", 5));
}

buffer[BUFFER_SIZE - 1] = '\0';

num = (unsigned long)loc;

while (num > 0)
{
buffer[index--] = mask[num % 16];
num /= 16;
len++;
}

if ((flags & F_ZERO) && !(flags & F_MINUS))
{
padding = '0';
}
if (flags & F_PLUS)
{
more_char = '+', len++;
}
else if (flags & F_SPACE)
{
more_char = ' ', len++;
}

index++;

ret_val = write_pointer(buffer, index, len, width, flags, padding, more_char, init_padding);

return (ret_val);
}
