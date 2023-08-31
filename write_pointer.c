#include "main.h"

/**
 * write_pointer - Write formatted pointer value to buffer
 * @buffer: The buffer to write to
 * @index: The current position in the buffer
 * @len: Length of the pointer value
 * @width: Width specification
 * @flags: Flags for formatting
 * @padding: The padding character
 * @extra_char: Extra character to include
 * @init_padd: Initial padding value
 *
 * Return: Number of characters printed
 */
int write_pointer(char buffer[], int index, int len, int width, int flags, char padding, char extra_char, int init_padd)
{
int n;

if (width > len)
{
for (n = 3; n < width - len + 3; n++)
{
buffer[n] = padding;
}
buffer[n] = '\0';
if (flags & F_MINUS && padding == ' ')
{
buffer[--index] = 'x';
buffer[--index] = '0';
if (extra_char)
{
buffer[--index] = extra_char;
}
return (write(1, &buffer[index], len) + write(1, &buffer[3], n - 3));
}
else if (!(flags & F_MINUS) && padding == ' ')
{
buffer[--index] = 'x';
buffer[--index] = '0';
if (extra_char)
{
buffer[--index] = extra_char;
}
return (write(1, &buffer[3], n - 3) + write(1, &buffer[index], len));
}
else if (!(flags & F_MINUS) && padding == '0')
{
if (extra_char)
{
buffer[--init_padd] = extra_char;
}
buffer[1] = '0';
buffer[2] = 'x';
return (write(1, &buffer[init_padd], n - init_padd) +
write(1, &buffer[index], len - (1 - init_padd) - 2));
}
}
buffer[--index] = 'x';
buffer[--index] = '0';
if (extra_char)
{
buffer[--index] = extra_char;
}
return (write(1, &buffer[index], BUFFER_SIZE - index - 1));
}
