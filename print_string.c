#include "main.h"

/**
 * print_string - print a string
 * @args: list of arguments
 *  Return: number of characters printed
 */


int print_string(va_list args)
{
	char *str;
	int  i;

	i = 0;
	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
