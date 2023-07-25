#include "main.h"
/**
 * _hexaint - prints the hexadecimal of an unsigned integer
 * @num: defines the unsigned integer
 * @digit: states the value of the integer
 * @buffer: shows the loaction of the unsigned integer
 *
 * return - void
 */
void _hexaint(unsigned int num, char *buffer, int digit)
{
	int a = 0;
	char alpha[] = "0123456789abcdef";
	int left, right;
        int temp;

	if (digit)
	{
		alpha[10] = 'A';
		alpha[11] = 'B';
		alpha[12] = 'C';
		alpha[13] = 'D';
		alpha[14] = 'E';
		alpha[15] = 'F';
	}
	if (num == 0)
	{
		buffer[0] = '0';
		buffer[1] = '\0';
		return;
	}
	while (num > 0)
	{
		buffer[a++] = alpha[num & 0xF];
		num >>= 4;
	}
	buffer[a] = '\0';
	left = 0;
	right = a - 1;
	while (left < right)
	{
		temp = buffer[left];
		buffer[left] = buffer[right];
		buffer[right] = temp;
	left++;
	right--;
	}
}
