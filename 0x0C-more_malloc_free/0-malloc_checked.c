#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - writes a function to allocate memory using malloc
 * @b: memory to allocate
 * Return: pointer to allocate memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
