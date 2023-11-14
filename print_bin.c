#include "main.h"

/**
 * print_bin - Convert to binary
 * @args: va_list argument
 * Return: Number of characters printed
 */
int print_bin(va_list args, char *buffer, char **buf_ptr)
{
	unsigned int num, mask, count;
	int z;

	count = 0;
	z = 1;
	num = va_arg(args, unsigned int);

	if (num == 0)
	{
        _putchar('0', buffer, buf_ptr);
		return (1);
	}

	for (mask = 1 << (sizeof(unsigned int) * 8 - 1); mask > 0; mask >>= 1)
	{
		if (num & mask)
		{
			z = 0;
            _putchar('1', buffer, buf_ptr);
			count++;
		}
		else if (!z)
		{
            _putchar('0', buffer, buf_ptr);
			count++;
		}
	}

	return (count);
}
