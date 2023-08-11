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
	int digit = 48; /*48; decimal rep 0*/

	while (digit <= 102) /*102; decimal rep of f*/
	{
		putchar(digit);

		/* after 9 we jump till 96; */
		if (digit == 57)
			digit += 39;
		digit++;
	}
	putchar('\n');

	return (0);
}
