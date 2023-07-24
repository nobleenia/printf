#include "main.h"

/**
* _getint - prints the individual values of an integer
* @n: the number to be printed
* @buffer: pointer to location where string wis stored
*
* Return: void
*/

int _getint(int n, char *buffer)
{
int len = 0;
int num_digits, temp, index;

if (n == 0)
{
buffer[0] = '0';
len = 1;
}
else
{
int is_negative = 0;
if (n < 0)
{
is_negative = 1;
n = -n;
}

num_digits = 0;
temp = n;
while (temp != 0)
{
temp /= 10;
num_digits++;
}

index = num_digits + is_negative;
buffer[index] = '\0';

if (is_negative)
buffer[0] = '-';

while (n != 0)
{
buffer[--index] = '0' + (n % 10);
n /= 10;
}

len = num_digits + is_negative;
}

return (len);
}
