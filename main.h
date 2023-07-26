#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdint.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _puts(const char *s);
int _getint(int n, char *buffer);
void _getbinary(unsigned int num, char *buffer); 
int _letint(int n, char *buffer);
void _octal(unsigned int num, char *buffer);
void _hexaint(unsigned int num, char *buffer, int digit);
int function_specifier(char spec, va_list args);
void _putchar_buff(const char *buffer);
int _print_S(const char *s);
char to_hex(int val);
int _print_p(void *p);

#endif
