#include "main.h"

/**
 * _print_percent - Print a percent symbol
 * @args: va_list containing the arguments
 *
 * Return: Number of characters printed
 */
int _print_percent (va_list args, char buffer[], int flags, int width, int prec, int size)
{

UNUSED(args);
UNUSED(buffer);
UNUSED(flags);
UNUSED(width);
UNUSED(prec);
UNUSED(size);

return(write(1, "%%", 1));
}
