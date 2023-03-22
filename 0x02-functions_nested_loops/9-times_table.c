#include "main.h"

/**
 * times_table - multiplication table of 9
 *
*/

void times_table(void)
{
	int n, mul, prod;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0' + '0');
		for (mul = 1; mul <= 9;  mul++)
		{
			_putchar(',');
			_putchar(' ');


			prod = n * mul;


			if (n <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((prod / 10) + 48);
			}
			_putchar((prod % 10) + 48);
		}
		_putchar('\n');
	}
}
