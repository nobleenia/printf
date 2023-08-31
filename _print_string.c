#include "main.h"

/**
 * _print_string - Print a string with specified formatting
 * @args: va_list containing the arguments
 *
 * Return: Number of characters printed
 */
int _print_string(va_list args, char buffer[], int flags, int width, int prec, int size)
{
int len = 0;
int n;
char *str = va_arg(args, char *);

UNUSED(buffer);
UNUSED(size);
 
if (str == NULL)
{
str = "(null)";
if (prec >= 6)
{
str = "      ";
}
}
while (str[len] != '\0')
{
len++;
}
if (prec >= 0 && prec < len)
{
len = prec;
}
if (width > len)
{
if (flags & F_MINUS)
{
write(1, &str[0], len);
for (n = width - len; n > 0; n--)
{
write(1, " ", 1);
}
return (width);
}
else
{
for (n = width - len; n > 0; n--)
{
write(1, " ", 1);
}
write(1, &str[0], len);
return (width);
}
}
return (write(1, str, len));
}
