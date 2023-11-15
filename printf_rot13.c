#include "main.h"
/**
 * print_rot13 - encode dtring with rot13
 * @args:  list of arguments
 * @buffer: buffer
 * @buf_ptr: buffer pointer
 *
 * Return: number of characters printed
 */
int print_rot13(va_list args, char *buffer, char **buf_ptr)
{
int count;
char i, c;
char *str = va_arg(args, char*);

count = 0;
if (str == NULL)
str = "(null)";

while (*str)
{
c = *str;
i = ('a' <= c && c <= 'z') ? 'a' : ('A' <= c && c <= 'Z') ? 'A' : 0;
if (i)
{
_putchar(((c - i + 13) % 26) + i, buffer, buf_ptr);
count++;
}
else
{
_putchar(c, buffer, buf_ptr);
count++;
}
str++;
}
return (count);
}
