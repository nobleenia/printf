#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdint.h>
#include <stdio.h>

int _putchar(char c);
int _puts(char *str);
int _printf(const char *format, ...);
int print_binary(unsigned int n);
int print_non_printable(char *str);
int print_hex(unsigned int n);
int print_hex_upper(unsigned int n);
int print_num(int n);
int print_unsigned(unsigned int n);
int print_octal(unsigned int n);
int print_rev_str(char *str);
int print_rot13(char *str);
int print_esc_str(char *str);

#endif
