#include "main.h"

/**
 * times_table - print multiplication table
 */

void times_table(void)
{
	int ligne;
	int colonne;
	int prod;

	for (ligne = 0; ligne <= 9; ligne++)
	{
		for (colonne = 0; colonne <= 9; colonne++)
		{
			prod = (ligne * colonne);

			if (colonne == 0)
			{
				_putchar('0' + prod);
			}
			else if (prod <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + prod);
			}
			else if (prod > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (prod / 10));
				_putchar('0' + (prod % 10));
			}
		}
		_putchar('\n');
	}
}
