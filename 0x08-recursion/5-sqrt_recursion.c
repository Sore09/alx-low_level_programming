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

/**
 * _sqrt_recursion -> recursive square root
 * @n: number
 * @i: iteration
 * Return: a number
 */
int _sqrt(int n, int i)
{
	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (_sqrt(n, i + 1));
}
