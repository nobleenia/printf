#include "main.h"
#include <stdio.h>

/**
 * _printf - prints arguments passed into it
 * @format: the variadic format of arguments passed
 *
 * Return: a non-negative integer
 */
int _printf(const char *format, ...)
{

unsigned a;
unsigned ret_val = 0;
 
va_list args;
va_start(args, format);

for (a = 0; format[a] != '\0'; a++)
{
if (format[a] != '%')
{
_putchar(format[a]);
ret_val++;
}
else
{
ret_val += function_specifier(format[a + 1], args);
a++;
}
}

va_end(args);
return (ret_val);
}
