#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* 
 * Return: Always 0 (success) 
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	/* Get the last digit of n */
	inti last_digit = n % 10

	/* Check if the variable n is positive, zero, or negative */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
