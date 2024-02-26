#include "main.h"

/**
 * _isdigit -ichecks for a digit (0 through 9)
 * @c: int type digit
 *
 * Return: 1 if  @c is a digit, 0 if false
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
