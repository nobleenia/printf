#include "main.h"

/**
 * convert_size_unsigned - Convert an unsigned number to different sizes
 * @num: The unsigned number to convert
 * @size: The target size
 *
 * Return: Converted number based on size
 */
unsigned long int convert_size_unsigned(unsigned long int num, int size)
{
if (size == S_LONG)
{
return (num);
}
else if (size == S_SHORT)
{
return ((unsigned short) num);
}
return ((unsigned int) num);
}
