#include "main.h"

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
}
else if (format[a + 1] == 'c')
{
_putchar(va_arg(args, int));
a++;
}
else if (format[a + 1] == 's')
{
int r_val = _puts(va_arg(args, char *));
a++;
ret_val += (r_val - 1);

}
else if (format[a + 1] == '%')
{
_putchar('%');
a++;
}
else if ((format[a + 1] == 'i') || (format[a + 1] == 'd'))
{
_getint(va_arg(args, int));
a++;
}
ret_val++;
}
va_end(args);
return (ret_val);
}
