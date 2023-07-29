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
int is_r = 0;
int num_val;

int flag_plus;
int flag_space;
int flag_hash;

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
flag_plus = 0;
flag_space = 0;
flag_hash = 0;

while (format[i] == '+' || format[i] == ' ' || format[i] == '#')
{
if (format[i] == '+')
flag_plus = 1;
else if (format[i] == ' ')
flag_space = 1;
else if (format[i] == '#')
flag_hash = 1;
i++;
}
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
str = va_arg(args, char *);
if (!str)
str = "(null)";
count += print_esc_str(str);
break;
case 'p':
ptr = (uintptr_t)va_arg(args, void *);
count += _puts("0x");
count += print_hex_without_leading_zeros(ptr);
break;
case 'd':
case 'i':
num_val = va_arg(args, int);
if (flag_plus && num_val >= 0)
{
count += _putchar('+');
}
else if (flag_space && num_val >= 0)
{
count += _putchar(' ');
}
count += print_num(num_val);
break;
case 'u':
num_val = va_arg(args, unsigned int);
count += print_unsigned(num_val);
break;
case 'o':
num_val = va_arg(args, unsigned int);
if (flag_hash)
{
count += _putchar('0');
}
count += print_octal(num_val);
break;
case 'x':
num_val = va_arg(args, unsigned int);
if (flag_hash)
{
count += _puts("0x");
}
count += print_hex(num_val);
break;
case 'X':
num_val = va_arg(args, unsigned int);
if (flag_hash)
{
count += _puts("0X");
}
count += print_hex_upper(num_val);
break;
case 'r':
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
case 'R':
count += print_rot13(va_arg(args, char *));
break;
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
