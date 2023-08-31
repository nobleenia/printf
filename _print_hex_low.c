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
int _print_hex_low(va_list args, char buffer[], int flags, int width, int prec, int size)
{

int hex_up_low;

hex_up_low = _print_hexa_up_low(args, "0123456789abcdef", buffer, flags, 'x', width, prec, size);

return (hex_up_low);
}
