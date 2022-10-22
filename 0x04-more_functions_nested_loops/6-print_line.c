#include "main.h"

/**
 * print_line - print staraight line using '_'
 * @n: number of times the char should print'_'
 */

void print_line(int n)
{
	int ln;

	if (n > 0)
	{
		for (ln = 0; ln < n; ln++)
			_putchar('_');
	}

	_putchar('\n');
}
