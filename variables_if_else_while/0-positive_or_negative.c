#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
       	int n;

       	srand(time(0));
       	n = rand() - RAND_MAX / 2;

       	/* Check if the variable n is positive, zero, or negative */
	
	printf("%d is positive", n);

       	if (n > 0)
       	{ printf("The number %d is positive.\n", n);
       	}
       	else if (n == 0)
       	{
	printf("The number %d is zero.\n", n);
       	}
       	else
       	{
	printf("The number %d is negative.\n", n);
							        }

       	return 0;
}
