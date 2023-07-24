#include "main.h"

/**
* _getint - prints the individual values of an integer
* @n: the number to be printed
*
* Return: void
*/

void _getint(int n)
{
int a;
 
if (n == 0)
return;

a = n / 10;

_getint(a);

_putchar((n % 10) + '0');

return;
}
