#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* See if the variable n is positive or negative */
	 
	if (n > 0)
       	{
	       	printf("the number %d is positive.\n", n);
       	} else if (n == 0)
       	{
	       	printf("the number %d is zero.\n", n);
       	} else (n < 0)
       	{
	       	printf("the number %d is negative.\n", ni);
	}
	
	return (0);
}
