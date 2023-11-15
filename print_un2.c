#include "main.h"
/**
 * _strlen - Calculate the length of a string
 * @str: pointer to string
 *
 * Return: The length of the string
 */
int _strlen(const char *str)
{
int len;

len = 0;
while (*str)
{
len++;
str++;
}
return (len);
}


/**
 * _num_digits - count the number of digits in an integer
 * @num: the integer number
 *
 * Return: the count number of digits in the integer
 */
int _num_digits(unsigned int num)
{
int count;

count = 0;
if (num == 0)
return (1);

while (num > 0)
{
num /= 10;
count++;
}

return (count);
}

/**
 * print_number - Print an unsigned integer in the specified format
 * @args: va_list argument
 * @specifier: Conversion specifier ('u', 'o', 'x', or 'X')
 * @buffer: buffer
 * @buf_ptr: buffer pointer
 * Return: Number of characters printed
 */
int print_number(va_list args, char specifier, char *buffer, char **buf_ptr)
{
unsigned int num;
char *str;

num = va_arg(args, unsigned int);

if (specifier == 'u')
str = unsig(num, 10);
else if (specifier == 'o')
str = unsig(num, 8);
else if (specifier == 'x' || specifier == 'X')
str = unsig_hex(num, specifier);

if (str == NULL)
return (0);

while(*str){
_putchar(*str, buffer, buf_ptr);
str++;
}
free(str);

return (_num_digits(num));
}
