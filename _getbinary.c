#include "main.h"
/**
 * _getbinary - Prints the binary representation of an unsigned integer
 * @num: A positive number that is converted to binary
 * @buffer: Points the location of a 
 * character
 * return : void
 *
 */
void _getbinary(unsigned int num, char *buffer)
{
	int a = 0;
	int left, right;
	if (num == 0)
	{
		buffer[0] = '0';
		buffer[1] = '\0';
		return;
	}
	while (num > 0)
	{
		buffer[a++] = '0'+ (num & 1);
	num >>= 1;
	}
	buffer[a] = '\0';
	left = 0;
	right = a - 1;
	while (left < right)
	{
       char temp = buffer[left];
       buffer[left] = buffer[right];
       buffer[right] = temp;
       left++;
       right--;
	}
	
}
  
