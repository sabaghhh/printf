#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @args: va_list argument
 * @buffer: buffer
 * @buf_ptr: buffer pointer
 *
 * Return: number of characters printed
 */
int print_rev(va_list args, char *buffer, char **buf_ptr)
{
int i, count, length;
char *str = va_arg(args, char *);

count = 0;
length = 0;

if (str == NULL)
str = ")llun(";
while (str[length] != '\0')
length++;

for (i = length - 1; i >= 0; i--)
{
_putchar(str[i], buffer, buf_ptr);
count++;
}
return (count);
}
