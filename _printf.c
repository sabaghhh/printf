#include "main.h"

/**
 * buffer_flush - print buffer content if buffer full
 * @buffer: buffer
 * @buffer_ptr: pointer to keep track of buffer position
 * No Return
 */
void buffer_flush(char *buffer, char **buffer_ptr)
{
if (*buffer_ptr - buffer >= 1024)
{
write(1, buffer, *buffer_ptr - buffer);
*buffer_ptr = buffer;
}
}


int handle_specifier(char sp,va_list args, char* buffer, char** buf_ptr){
    int count = 0;
    if (sp == 'c')
        count += print_char(args, buffer, buf_ptr);
    else if (sp == 's')
        count += print_string(args, buffer, buf_ptr);
    else if (sp == 'i' || sp == 'd')
        count += print_int(args, buffer, buf_ptr);
    else if (sp == 'b')
        count += print_bin(args, buffer, buf_ptr);
    else if (sp == 'r')
        count += print_rev(args, buffer, buf_ptr);
    else if (sp == 'u' || sp == 'o' || sp == 'x' || sp == 'X')
        count += print_number(args, sp);
    else if (sp == '%')
    {
        _putchar('%', buffer, buf_ptr);
        count++;
    }

    return count;
}

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

char buffer[1024], *buf_ptr = buffer;

if (!format || (format[0] == '%' && !format[1]))
return (-1);
count = 0;
va_start(args, format);
while (*format)
{
if (*format != '%')
{
_putchar(*format, buffer, &buf_ptr);
count++;
}
else
{
format++;
if (*format == '\0')
break;
count+=handle_specifier(*format, args, buffer, &buf_ptr);
}
format++;
}
(buf_ptr > buffer) ? write(1, buffer, buf_ptr - buffer) : 0;
va_end(args);
return (count);
}
