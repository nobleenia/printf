#include "main.h"

/**
 * get_size - Parse and return the size specifier
 * @format: The format string to parse
 * @n: Pointer to the current index in the format string
 *
 * Return: The parsed size specifier
 */
int get_size(const char *format, int *n)
{
int current_i = *n + 1;
int size = 0;

if (format[current_i] == 'l')
{
size = S_LONG;
}
else if (format[current_i] == 'h')
{
size = S_SHORT;
}

if (size == 0)
{
*n = current_i - 1;
}
else
{
*n = current_i;
}
return (size);
}
