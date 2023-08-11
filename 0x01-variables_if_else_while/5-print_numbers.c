#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * Describtion: rints all single digit numbers of base 10
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit = 0;
	
	while (digit < 10)
	{
		printf("%i", digit);
		digit++;
	}
	printf("\n");

	return (0);
}
