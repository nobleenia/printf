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
char buffer[1024];

va_list args;
va_start(args, format);

for (a = 0; format[a] != '\0'; a++)
{
if (format[a] != '%')
{
buffer[ret_val++] = format[a];
}
else if (format[a + 1] == 'c')
{
_putchar(va_arg(args, int));
ret_val++;
a++;
}
else if (format[a + 1] == 's')
{
ret_val += _puts(va_arg(args, char *));
a++;
}
else if (format[a + 1] == '%')
{
_putchar('%');
ret_val++;
a++;
}
else if (format[a + 1] == 'd' || format[a + 1] == 'i')
{
int num = va_arg(args, int);
_getint(num, buffer);
ret_val += _puts(buffer);
a++;
}
else if (format[a + 1] == 'b')
{
_getbinary(va_arg(args, unsigned int), buffer);
ret_val += _puts(buffer);
a++;
}
else if (format[a + 1] == 'u')
{
unsigned int num = va_arg(args, unsigned int);
_letint(num, buffer);
ret_val += _puts(buffer);
a++;
}
else if (format[a + 1] == 'o')
{
unsigned int num = va_arg(args, unsigned int);
_octal(num, buffer);
ret_val += _puts(buffer);
a++;
}
else if (format[a + 1] == 'x')
{
unsigned int num = va_arg(args, unsigned int);
_hexaint(num, buffer, 0);
ret_val += _puts(buffer);
a++;
}
else if (format[a + 1] == 'X')
{
unsigned int num = va_arg(args, unsigned int);
_hexaint(num, buffer, 1);
ret_val += _puts(buffer);
a++;
}
else
{
_putchar('%');
ret_val++;
}
}

write(1, buffer, ret_val);

va_end(args);
return (ret_val);
}
