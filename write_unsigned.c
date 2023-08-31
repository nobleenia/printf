#include "main.h"

/**
 * write_unsigned - Write an unsigned value to buffer
 * @index: The current position in the buffer
 * @buffer: The buffer to write to
 * @flags: Flags for formatting
 * @width: Width specification
 * @prec: Precision specification
 *
 * Return: Number of characters printed
 */
int write_unsigned(int is_negative, int index, char buffer[], int flags, int width, int prec, int size)
{
int len = BUFFER_SIZE - index - 1;
int n = 0;
char padding = ' ';

UNUSED(is_negative);
UNUSED(size);

if (prec == 0 && index == BUFFER_SIZE - 2 && buffer[index] == '0')
{
return (0);
}

if (prec > 0 && prec < len)
{
padding = ' ';
}

while (prec > len)
{
buffer[--index] = '0';
len++;
}

if ((flags & F_ZERO) && !(flags & F_MINUS))
{
padding = '0';
}

if (width > len)
{
for (n = 0; n < width - len; n++)
{
buffer[n] = padding;
}

buffer[n] = '\0';

if (flags & F_MINUS)
{
return (write(1, &buffer[index], len) + write(1, &buffer[0], n));
}
else
{
return (write(1, &buffer[0], n) + write(1, &buffer[index], len));
}
}

return (write(1, &buffer[index], len));
}
