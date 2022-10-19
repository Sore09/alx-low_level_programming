#include "main.h"

/**
 * print_alphabet -> prints the lowercase alphabets
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	int la;

	for (la = 'a'; la <= 'z'; la++)
	{
		_putchar(la);
	}
	_putchar('\n')

	return (0);
}
