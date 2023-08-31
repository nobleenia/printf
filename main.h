#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

#define S_LONG 2
#define S_SHORT 1

#define UNUSED(x) (void)(x);

/**
 * struct format - Struct op
 *
 * @format: The format.
 * @funct: The function associated.
 */
struct format
{
char format;
int (*funct)(va_list, char[], int, int, int, int);
};


/**
 * typedef struct format format_t - Struct op
 *
 * @format: The format.
 * @format_t: The function associated.
 */
typedef struct format format_t;

int _putchar(char c);
int _puts(char *str);
int _printf(const char *format, ...);

int append_hexa_code(char ascii_code, char buffer[], int n);
long int convert_size_number(long int num, int size);
unsigned long int convert_size_unsigned(unsigned long int num, int size);
int get_flags(const char *format, int *n);
int get_function(const char *format, int *index, va_list list, char buffer[], int flags, int width, int precision, int size);
int get_precision(const char *format, int *n, va_list list);
int get_size(const char *format, int *n);
int get_width(const char *format, int *n, va_list list);
int is_digit(char c);
int is_printable(char c);
int _print_binary(va_list args, char buffer[], int flags, int width, int prec, int size);
void _print_buffer(char buffer[], int *buffer_index);
int _print_char(va_list args, char buffer[], int flags, int width, int prec, int size);
int print_esc_str(char *str);
int _print_hexa_up_low(va_list args, char mask[], char buffer[], int flags, char flag_ch, int width, int prec, int size);
int _print_hex_low(va_list args, char buffer[], int flags, int width, int prec, int size);
int _print_hex_up(va_list args, char buffer[], int flags, int width, int prec, int size);
int _print_int(va_list args, char buffer[], int flags, int width, int prec, int size);
int print_non_printable(va_list args, char buffer[], int flags, int width, int precision, int size);
int print_num(int n);
int _print_octal(va_list args, char buffer[], int flags, int width, int prec, int size);
int _print_percent (va_list args, char buffer[], int flags, int width, int prec, int size);
int _print_pointer(va_list args, char buffer[], int flags, int width, int prec, int size);
int _print_rev(va_list args, char buffer[], int flags, int width, int prec, int size);
int _print_rot13(va_list args, char buffer[], int flags, int width, int prec, int size);
int _print_string(va_list args, char buffer[], int flags, int width, int prec, int size);
int _print_unsigned(va_list args, char buffer[], int flags, int width, int prec, int size);
int write_num(int index, char buffer[], int flags, int width, int prec, int len, char padding, char extra_char);
int write_pointer(char buffer[], int index, int len, int width, int flags, char padding, char extra_char, int init_padd);
int write_spec_char(char c, char buffer[], int flags, int width, int prec, int size);
int write_spec_num(int is_negative, int index, char buffer[], int flags, int width, int prec, int size);
int write_unsigned(int is_negative, int index, char buffer[], int flags, int width, int prec, int size);

#endif
