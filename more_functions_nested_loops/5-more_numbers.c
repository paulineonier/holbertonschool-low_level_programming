#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 */

void more_numbers(void)
{
	char i, j;

	for (i = '1'; i <= 10; i++)
	{
		for (j = '0'; j <= 14; j++)
		{
			if (i / 10 > 0)
			{
				_putchar((i / 10) + '0');
			}

			{
				_putchar((i % 10) + '0');
			}

		_putchar('\n');
		}
	}
}

