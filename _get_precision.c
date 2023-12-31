#include "main.h"

/**
 * get_precision - Parse and return the precision value
 * @format: The format string to parse
 * @n: Pointer to the current index in the format string
 * @list: The va_list containing the variable arguments
 *
 * Return: The parsed precision value
 */
int get_precision(const char *format, int *n, va_list list)
{
int current_i = *n + 1;
int precision = -1;

if (format[current_i] != '.')
{
return (precision);
}
precision = 0;

for (current_i += 1; format[current_i] != '\0'; current_i++)
{
if (is_digit(format[current_i]))
{
precision *= 10;
precision += format[current_i] - '0';
}
else if (format[current_i] == '*')
{
current_i++;
precision = va_arg(list, int);
break;
}
else
{
break;
}
}

*n = current_i - 1;

return (precision);
}
