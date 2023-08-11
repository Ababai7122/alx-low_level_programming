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
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
