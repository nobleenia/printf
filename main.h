#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _puts(const char *s);
int _getint(int n, char *buffer);
void _getbinary(unsigned int num, char *buffer); 
int _letint(int n, char *buffer);
void _octal(unsigned int num, char *buffer);
void _hexaint(unsigned int num, char *buffer, int digit);
#endif
