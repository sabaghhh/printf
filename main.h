#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int print_char(va_list args, char *buffer, char **buf_ptr);
int print_string(va_list args, char *buffer, char **buf_ptr);
int print_int(va_list args, char *buffer, char **buf_ptr);
int print_bin(va_list args, char *buffer, char **buf_ptr);
int _putchar(char c, char *buffer, char **buf_ptr);
int _printf(const char *format, ...);
int print_number(va_list args, char specifier, char *buffer, char **buf_ptr);
char *unsig(unsigned int num, int base);
char *unsig_hex(unsigned int num, char specifier);
int _strlen(const char *str);
int _num_digits_hex(unsigned int num);
int _num_digits(unsigned int num);
void buffer_flush(char *buffer, char **buffer_ptr);
int print_rev(va_list args, char *buffer, char **buf_ptr);
int print_rot13(va_list args, char *buffer, char **buf_ptr);
#endif

