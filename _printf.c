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
char buf[18];
int is_r = 0;
int num_val;
 
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
if (format[i] == 'r')
{
is_r = 1;
}
else
{
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
ptr = (uintptr_t)va_arg(args, void *);
sprintf(buf, "0x%zx", ptr);
count += _puts(buf);
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
count += print_hex(va_arg(args, uintptr_t));
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
case '+':
{
num_val = va_arg(args, int);
if (num_val >= 0)
{
count += _putchar('+');
}
count += print_num(num_val);
break;
}
case ' ':
{
num_val = va_arg(args, int);
if (num_val >= 0)
{
count += _putchar(' ');
}
count += print_num(num_val);
break;
}
case '#':
{
count += _putchar('%');
count += _putchar(format[i]);
break;
}
default:
count += _putchar('%');
count += _putchar(format[i]);
break;
}
is_r = 0;
}
if (is_r)
{
count += _puts("%r");
is_r = 0;
}
}
i++;
}

va_end(args);
return (count);
}
