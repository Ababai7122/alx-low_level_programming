#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n: take the input from the function
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	iint lastDigit;

	if (n < 0)
		lastDigit = -1 * (n % 10);
	else
		lastDigit = n % 10;

	_putchar(lastDigit + '0');
	return (lastDigit);
}
