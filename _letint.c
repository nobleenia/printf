#include "main.h"

/**
* _letint - prints the individual values of an integer
* @n: the number to be printed
* @buffer: pointer to location where string wis stored
*
* Return: void
*/

int _letint(int n, char *buffer)
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
if (n < 0)
{
n = -n;
}

num_digits = 0;
temp = n;
while (temp != 0)
{
temp /= 10;
num_digits++;
}

index = num_digits;
buffer[index] = '\0';

while (n != 0)
{
buffer[--index] = '0' + (n % 10);
n /= 10;
}

len = num_digits;
}

return (len);
}
