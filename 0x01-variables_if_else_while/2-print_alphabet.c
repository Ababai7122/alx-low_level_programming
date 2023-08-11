#include <stdio.h>
/**
 * main - intry point
 *
 * Description: prints the alphabet in lowercase
 *
 *Return: 0 (success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	outchar('\n');

	return (0);
}
