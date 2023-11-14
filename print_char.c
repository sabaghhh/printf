#include "main.h"
/**
 * print_char - print a char
 * @args: list of arguments
 * @buffer: buffer
 * @buf_ptr: buffer pointer
 * Return: number of characters printed
 */
int print_char(va_list args, char *buffer, char **buf_ptr)
{
unsigned char ch;

ch = va_arg(args, int);
_putchar(ch, buffer, buf_ptr);
return (1);
}
