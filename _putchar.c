#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c, char *buffer, char **buf_ptr)
{
    buffer_flush(buffer, buf_ptr);
    **buf_ptr = c;
    (*buf_ptr)++;
    return (1);
}
