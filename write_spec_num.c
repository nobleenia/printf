#include "main.h"

/**
 * write_spec_num - Write a special numeric value to buffer
 * @is_negative: Flag indicating if the number is negative
 * @index: The current position in the buffer
 * @buffer: The buffer to write to
 * @flags: Flags for formatting
 * @width: Width specification
 * @prec: Precision specification
 *
 * Return: Number of characters printed
 */
int write_spec_num(int is_negative, int index, char buffer[], int flags, int width, int prec, int size)
{
int len = BUFFER_SIZE - index - 1;
char padding = ' ';
char extra_char = 0;

UNUSED(size);

if ((flags & F_ZERO) && !(flags & F_MINUS))
{
padding = '0';
}
if (is_negative)
{
extra_char = '-';
}
else if (flags & F_PLUS)
{
extra_char = '+';
}
else if (flags & F_SPACE)
{
extra_char = ' ';
}

return (write_num(index, buffer, flags, width, prec, len, padding, extra_char));
}
