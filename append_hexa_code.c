#include "main.h"

/**
 * append_hexa_code - Append hexadecimal code for non-printable characters
 * @ascii_code: The ASCII code of the character
 * @buffer: The buffer to append to
 * @n: The current position in the buffer
 *
 * Return: Number of characters appended
 */
int append_hexa_code(char ascii_code, char buffer[], int n)
{
char map_to[] = "0123456789ABCDEF";

if (ascii_code < 0)
{
ascii_code *= -1;
}

buffer[n++] = '\\';
buffer[n++] = 'x';

buffer[n++] = map_to[ascii_code / 16];
buffer[n] = map_to[ascii_code % 16];

return (3);
}
