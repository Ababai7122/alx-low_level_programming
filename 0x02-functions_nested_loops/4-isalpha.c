#include"main.h"

/**
 * _isalpha _ chech weather the character is lowwercase or uppercase
 *
 * @c: takes input formmother functions
 *
 * Return: 1 is c if true else 0
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1)
	return (0);
}