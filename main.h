#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int print_char(va_list args);
int print_string(va_list args);
int print_int(va_list args);
int print_bin(va_list args);
int _putchar(char c);
int _printf(const char *format, ...);
int print_number(va_list args, char specifier);
char *unsig(unsigned int num, int base);
char *unsig_hex(unsigned int num, char specifier);
int _strlen(const char *str);
int _num_digits_hex(unsigned int num);
int _num_digits(unsigned int num);

#endif
