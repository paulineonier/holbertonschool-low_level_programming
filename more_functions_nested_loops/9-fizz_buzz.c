#include <stdio.h>

/**
 * main - print 1 to 100,
 * multiples of 3 with Fizz,
 * multiples of 5 with Buzz
 * and multiple of both 3 and 5 with FizzBuzz
 * Return: 0 on success
 */

int main(void)
{
	int i;

	for (i = 1; i < 100; i++)

	if (i % 3 == 0 && i % 5 == 0) /* si multiple 3,5 print FizzBuzz */
	{
		printf("FizzBuzz");
	}
	else if (i % 3 == 0) /* si multiple de 3 print Fizz */
	{
		printf("Fizz");
	}
	else if (i % 5 == 0) /* si multiple de 5 print Buzz */
	{
		printf("Buzz");
	}
	else
	{
		printf("%d", i); /* print valeur entre 0 et 100 si != multiple de 3,5 */
	}
	if (i < 100) /* si inferieur a 100 print un espace */
	{
		printf(" ");
	}
	printf("\n");
	return (0); /* retourne 0 une fois fini */
}
