#include "main.h"

/**
 * convert_size_number - Convert a number to different sizes
 * @num: The number to convert
 * @size: The target size
 *
 * Return: Converted number based on size
 */
long int convert_size_number(long int num, int size)
{
if (size == S_LONG)
{
return (num);
}
else if (size == S_SHORT)
{
return ((short) num);
}

return ((int) num);
}
