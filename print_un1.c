#include "main.h"
/**
 * unsig_hex - Convert an unsigned integer to a hexadecimal
 * @num: Unsigned integer
 * @specifier: Conversion specifier ('x' or 'X')
 *
 * Return: The hexadecimal string representation of the number
 */

char *unsig_hex(unsigned int num, char specifier)
{
int remainder;

int len = _num_digits_hex(num);

char *hex_str = malloc(len + 1);

if (hex_str == NULL)
	return (NULL);

hex_str[len] = '\0';

while (len > 0)
{
	len--;
	remainder = num % 16;
	if (remainder < 10)
		hex_str[len] = '0' + remainder;
	else
		hex_str[len] = specifier == 'x' ? 'a' + remainder -10
			: 'A' + remainder -10;
	num /= 16;
}

return (hex_str);
}

/**
 * _num_digits_hex - count the number of digits in hexadecimal
 * @num: Unsigned integer
 *
 * Return:  the number of digits
 */

int _num_digits_hex(unsigned int num)
{
int count = 0;

if (num == 0)
	return (1);
while (num > 0)
{
	num /= 16;
	count++;
}
return (count);
}


/**
 * unsig - Convert an unsigned integer
 * @num: Unsigned integer
 * @base: Base for conversion (8 for octal, 10 for decimal)
 *
 * Return: The string representation of the number
 */
char *unsig(unsigned int num, int base)
{
int len;
unsigned int temp;
char *str;

if (num == 0)
{
	str = malloc(2);
	if (str == NULL)
		return (NULL);
	str[0] = '0';
	str[1] = '\0';
	return (str);
}
len = 0;
temp = num;
while (temp > 0)
{
temp /= base;
len++;
}
str = malloc(len + 1);
if (str == NULL)
	return (NULL);

str[len] = '\0';
while (len > 0)
{
len--;
str[len] = '0' + num % base;
num /= base;
}
return (str);
}

