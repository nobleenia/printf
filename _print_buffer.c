#include "main.h"

/**
 * _print_buffer - Print the contents of a buffer and reset index
 * @buffer: The buffer containing characters to print
 * @buffer_index: Pointer to the current index in the buffer
 */
void _print_buffer(char buffer[], int *buffer_index)
{
if (*buffer_index > 0)
{
write(1, &buffer[0], *buffer_index);
}
*buffer_index = 0;
}
