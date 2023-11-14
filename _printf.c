#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string
 * @...: Variable argument:s
 *
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
int count;
va_list args;

if (!format || (format[0] == '%' && !format[1]))
return (-1);
count = 0;
va_start(args, format);
while (*format)
{
if (*format != '%')
{
write(1, format, 1);
count++;
}
else
{
format++;
if (*format == '\0')
break;
if (*format == 'c')
count += print_char(args);
else if (*format == 's')
count += print_string(args);
else if (*format == 'i' || *format == 'd')
count += print_int(args);
else if (*format == 'b')
count += print_bin(args);
else if (*format == 'u' || *format == 'o' || *format == 'x' || *format == 'X')
count += print_number(args, *format);
else if (*format == '%')
{
_putchar('%');
count++;
}
}
format++;
}
va_end(args);
return (count);
}
