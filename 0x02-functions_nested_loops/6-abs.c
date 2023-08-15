#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @n: take the input from the function
 *
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
