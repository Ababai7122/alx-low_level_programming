#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all single digit numbers of base 10 using char
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/* Converting the digit in to ASCII*/
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
