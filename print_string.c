#include "main.h"

/**
 * print_string - print a string
 * @args: list of arguments
 * @buffer: buffer
 * @buf_ptr: buffer pointer
 *  Return: number of characters printed
 */


int print_string(va_list args, char *buffer, char **buf_ptr)
{
char *str, *ss;
int  i;

i = 0;
str = va_arg(args, char *);
if (str == NULL)
str = "(null)";
while (str[i])
{
if ((str[i] > 0 && str[i] < 32) || (str[i] >= 127))
{
_putchar('\\', buffer, buf_ptr);
_putchar('x', buffer, buf_ptr);
ss = unsig_hex(str[i], 'X');

if (!ss[1])
_putchar('0', buffer, buf_ptr);
while (*ss)
{
_putchar(*ss, buffer, buf_ptr);
ss++;
}

}
else
_putchar(str[i], buffer, buf_ptr);

i++;
}
return (i);
}
