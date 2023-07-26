#include "main.h"

/**
 * function_specifier - handles the specifier for the _printf.c
 * @spec: input specifier for a given function
 * @args: the variadic list to work with
 *
 * Return: the return value for each specifier or case
 */
int function_specifier(char spec, va_list args)
{
char buffer[12];
int ret_val = 0;

switch (spec)
{
case 'c':
_putchar(va_arg(args, int));
ret_val = 1;
break;
case 's':
ret_val =_puts(va_arg(args, char *));
break;
case 'S':
ret_val = _print_S(va_arg(args, char *));
break;
case '%':
_putchar('%');
ret_val = 1;
break;
case 'd':
case 'i':
ret_val = _getint(va_arg(args, int), buffer);
_puts(buffer);
break;
case 'u':
ret_val = _letint(va_arg(args, unsigned int), buffer);
_puts(buffer);
break;
case 'b':
_getbinary(va_arg(args, unsigned int), buffer);
ret_val = _puts(buffer);
break;
case 'o':
_octal(va_arg(args, unsigned int), buffer);
ret_val = _puts(buffer);
break;
case 'x':
_hexaint(va_arg(args, unsigned int), buffer, 0);
ret_val = _puts(buffer);
break;
case 'X':
_hexaint(va_arg(args, unsigned int), buffer, 1);
ret_val = _puts(buffer);
break;
case 'p':
ret_val = _print_p(va_arg(args, void *));
break;
default:
_putchar('%');
ret_val = 1;
break;
}
return (ret_val);
}
