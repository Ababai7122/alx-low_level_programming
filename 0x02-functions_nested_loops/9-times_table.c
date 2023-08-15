#include"main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 */

void times_table(void)
{
	int n, mult, prod;
	
	for (n = 0;  n <= 9; n++)
	{
		_putchar(48);
		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			-putchar(' ');

			prod = n * mult;

			if (prod <= 9)
				-putchar(' ');
			else
				_putchar((prod / 10) + 48);

			-putchar((prod % 10) + 48);
		}
		_putchar('\n');
	}
}
