#include "main.h"

/**
 * _printf - Custom implementation of printf
 * @format: The format string
 * @...: Variable number of arguments
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
int i, printed = 0, printed_chars = 0;
int flags, width, precision, size, buffer_index = 0;
va_list list;
char buffer[BUFFER_SIZE];

if (format == NULL)
{
return (-1);
}
va_start(list, format);

for (i = 0; format && format[i] != '\0'; i++)
{
if (format[i] != '%')
{
buffer[buffer_index++] = format[i];
if (buffer_index == BUFFER_SIZE)
{
_print_buffer(buffer, &buffer_index);
}
printed_chars++;
}
else
{
_print_buffer(buffer, &buffer_index);
flags = get_flags(format, &i);
width = get_width(format, &i, list);
precision = get_precision(format, &i, list);
size = get_size(format, &i);
++i;
printed = get_function(format, &i, list, buffer,
flags, width, precision, size);
if (printed == -1)
{
return (-1);
}
printed_chars += printed;
}
}

_print_buffer(buffer, &buffer_index);

va_end(list);

return (printed_chars);

}
