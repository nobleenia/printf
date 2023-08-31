#include "main.h"

/**
 * print_rev_str - print string in reverse format
 * @args: va_list containing the arguments
 *
 * Return: number of characters printed
 */
int _print_rev(va_list args, char buffer[], int flags, int width, int prec, int size)
{
char *str;
int n;
int ret_val = 0;

UNUSED(buffer);
UNUSED(flags);
UNUSED(width);
UNUSED(size);

str = va_arg(args, char *);

if (str == NULL)
{
UNUSED(prec);
str = ")Null(";
}
for (n = 0; str[n]; n++)
;

for (n = n - 1; n >= 0; n--)
{
char z = str[n];

write(1, &z, 1);
ret_val++;
}
return (ret_val);
}
