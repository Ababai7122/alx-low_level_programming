#include"main.h"

/**
 * _isupper - check if c is upper
 *
 * @c: inpt for alphabet
 *
 * Return: 1 if its uppercase and 0 if lowercase
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
