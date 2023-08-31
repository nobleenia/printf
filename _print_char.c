#include "main.h"

/**
 * _print_char - Print a character
 * @args: va_list containing the arguments
 * @buffer: The buffer to write to
 * @flags: Unused flags
 * @width: Unused width
 * @prec: Unused precision
 * @size: Unused size
 *
 * Return: Number of characters printed
 */
int _print_char(va_list args, char buffer[], int flags, int width, int prec, int size)
{
char c = va_arg(args, int);
return (write_spec_char(c, buffer, flags, width, prec, size));
}
