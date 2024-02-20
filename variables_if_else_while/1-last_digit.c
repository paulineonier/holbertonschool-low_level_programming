#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Get the last digit of n */
	last_digit = n % 10;

	printf("Last digit of %d is: %d\n", n, last_digit);

	/* See if lastdigit greater than 5, equal to 0, or less than 6 and not 0 */
	if ((n % 10) > 5)
	{
	printf("last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else if ((n % 10) == 0)
	{
	printf("last digit of %d is %d and is 0\n", n, last_digit);
	}
	else
	{
	printf("%d is %d and is less than 6 and not 0\n", n, last_digit);
	}
	return (0);
}
