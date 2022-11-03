#include "main.h"

int _sqrt(int, int);

/**
 * _sqrt_recursion - function that returns natural square root of a number
 * @n: parameter to be squared
 * Return: square root of a number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
