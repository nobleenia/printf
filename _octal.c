#include "main.h"
/**
 * _octal - Prints the octal;representation of an unsigned
 * @num - Defines the unsigned interger
 * @buffer - shows the location of the unsigned integer
 *
 * Return: void
 */
void _octal(unsigned int num, char *buffer)
{
int a = 0;
int temp;
int right, left;

if (num == 0)
{
buffer[0] = '0';
buffer[1] = '\0';
return;
}

while (num > 0)
{
buffer[a++] = '0' + (num & 7); 
num >>= 3;
}

buffer[a] = '\0';
left = 0;
right = a - 1;

while (left < right)
{
temp = buffer[left];
buffer[left] = buffer[right];
buffer[right] = temp;left++;
right--;
}
}
