#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c:the character to print
 * Return: on success 1
 * On error: -1 is required, and errom is set appropriate
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
