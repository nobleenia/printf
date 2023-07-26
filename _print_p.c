#include "main.h"

/**
 * _print_p - handles pointers
 * @ptr: pointer to variable
 *
 * Return:  the length of the buffer
 */
int _print_p(void *p)
{
uintptr_t address = (uintptr_t)p;
char buffer[20];
 int digit, prev, next, temp, ret_val;
int a = 0;

while (address > 0)
{
digit = address & 0xF;
buffer[a++] = (digit < 10) ? ('0' + digit) : ('A' + digit - 10);
address >>= 4;
}
if (a == 0)
{
buffer[a++] = '0';
}

buffer[a++] = 'x';
buffer[a++] = '0';
buffer[a++] = '\0';

prev = 2;
next = a - 1;
while (prev < next)
{
temp = buffer[prev];
buffer[prev] = buffer[next];
buffer[next] = temp;
prev++;
next--;
}
ret_val = _puts(buffer);
return (ret_val);
}
