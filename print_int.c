#include "main.h"
/**
 * print_int - Print an integer
 * @args: the passed argument list
 * Return: no of digits printed
 */
int print_int(va_list args, char *buffer, char **buf_ptr)
{
int num, count, temp, length, d1, d2;

count = 0;
num = va_arg(args, int);
if (num == 0)
{
_putchar('0', buffer, buf_ptr);
return (1);
}
if (num < 0)
{
_putchar('-', buffer, buf_ptr);
count++;
num = -num;
}
temp = num;
length = 0;
while (temp != 0)
{
temp /= 10;
length++;
}
d1  = 1;
while (d1 <= num / 10)
d1 *= 10;
do {
d2 = num / d1;
_putchar(d2 + '0', buffer, buf_ptr);
count++;
num %= d1;
d1 /= 10;
} while (d1 > 0);
return (count);
}
