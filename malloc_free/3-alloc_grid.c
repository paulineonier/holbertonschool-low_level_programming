#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - creates matrix
 * @width: width of array
 * @height: height of array
 * Return: pointer of new grid
 */
int **alloc_grid(int width, int height)
{
	int **str;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	str = (int **)malloc(sizeof(int *) * height);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		str[i] = (int *)malloc(sizeof(int) * width);
		if (str[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(str[j]);
			}
			free(str);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			str[i][j] = 0;

	return (str);
}
