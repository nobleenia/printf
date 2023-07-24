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
  get_int a = num / 10;

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
	  _puts(va_arg(args, char *));
	  a++;
	  ret_val++;
	  
	}
      else if (format[a + 1] == '%')
	{
	  _putchar('%');
	  a++;
	}
      ret_val++;
    }
  else if (number == 0)
  {
	  _putchar((n % 10) + '0');
  }
  else if (format[a + 1] == 'i')
  {
	  _putchar(va_arg(args, int))
		  a++;
  return (ret_val);
}
