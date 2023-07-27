#include "main.h"

/**
 * _printf - prints arguments passed into it
 * @format: the variadic format of arguments passed
 *
 * Return: a non-negative integer
 */
int _printf(const char *format, ...)
{
va_list args;
int i = 0, count = 0;
char *str;
unsigned int num;
int len;
uintptr_t ptr;

va_start(args, format);

while (format && format[i])
{
if (format[i] != '%')
{
count += _putchar(format[i]);
}
else if (format[i + 1])
{
i++;
switch (format[i])
{
case 'c':
count += _putchar(va_arg(args, int));
break;
case 's':
str = va_arg(args, char *);
if (!str)
str = "(null)";
count += _puts(str);
break;
case '%':
count += _putchar('%');
break;
case 'b':
{
num = va_arg(args, unsigned int);
count += print_binary(num);
break;
}
case 'S':
{
str = va_arg(args, char *);
if (!str)
str = "(null)";
count += print_esc_str(str);
break;
}
case 'p':
{
count += _putchar('0') + _putchar('x');
ptr = (uintptr_t)va_arg(args, void *);
count += print_hex(ptr);
break;
}
case 'd':
case 'i':
count += print_num(va_arg(args, int));
break;
case 'u':
count += print_unsigned(va_arg(args, unsigned int));
break;
case 'o':
count += print_octal(va_arg(args, unsigned int));
break;
case 'x':
count += print_hex(va_arg(args, unsigned int));
break;
case 'X':
count += print_hex_upper(va_arg(args, unsigned int));
break;
case 'r':
{
str = va_arg(args, char *);
if (!str)
{
count += _puts("(null)");
break;
}
len = 0;
while (str[len])
{
len++;
}
for (i = len - 1; i >= 0; i--)
{
count += _putchar(str[i]);
}
break;
}
case 'R':
count += print_rot13(va_arg(args, char *));
break;
default:
count += _putchar('%');
count += _putchar(format[i]);
break;
}
}
i++;
}

va_end(args);
return count;
}
