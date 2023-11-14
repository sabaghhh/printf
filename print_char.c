#include "main.h"
/**
 * print_char - print a char
 * @args: list of arguments
 * Return: number of characters printed
 */
int print_char(va_list args)
{
unsigned char ch;

ch = va_arg(args, int);
_putchar(ch);
return (1);
}
