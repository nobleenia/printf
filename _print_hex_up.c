#include "main.h"

/**
 * _print_hex_low - Print an integer as a lowercase hexadecimal number
 * @args: va_list containing the arguments
 * @buffer: The buffer to write to
 * @flags: Flags for formatting
 * @width: Width specification
 * @prec: Precision specification
 * @size: Size specification
 *
 * Return: Number of characters printed 
 */
int _print_hex_up(va_list args, char buffer[], int flags, int width, int prec, int size)
{
int hex_up;

hex_up = _print_hexa_up_low(args, "0123456789ABCDEF", buffer, flags, 'X', width, prec, size);

return (hex_up);
}
