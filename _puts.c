#include "main.h"

#define BUFFER_SIZE 1024

void _putchar_buff(const char *buffer);

/**
 * puts - prints the characters in an array of strings
 * @s: the strings to be printed
 *
 * Return: non-negative number
 */
int _puts(const char *s)
{
int a;
int ret_val = 0;
char buffer[BUFFER_SIZE];
int index = 0;

for (a = 0; s[a] != '\0'; a++)
{
buffer[index++] = s[a];
if (index == BUFFER_SIZE - 1)
{
buffer[index++] = '\0';
_putchar_buff(buffer);
ret_val += index;
index = 0;
}
}

if (index > 0)
{
buffer[index] = '\0';
_putchar_buff(buffer);
ret_val += index;
}
return (ret_val);
}

/**
 * _putchar_buff - prints the buffer to std out
 * @char: characters to be printed
 * @buffer: pointer to buffer to be printed from
 */
void _putchar_buff(const char *buffer)
{
write(1, buffer, strlen(buffer));
}
