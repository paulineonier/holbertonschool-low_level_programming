#include <stddef.h>

/**
 * int_index - search for integer in array with function pointer
 * @array: array
 * @size: size of array
 * @cmp: pointer to searching/comparing function to execute
 * Return: index where integer's found, -1 if not found or array not present
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
/* verifie les elements, si ils sont nuls et/ou match pas et return -1 */
	{
		return (-1);
	}

	for (i = 0; i < size; i++) /* parcours l'array */
	{
		if (cmp(*(array + i)))
		{
	/**
	* array = pointeur vers 1er element du tableau
	* i = indice de l'element actuel du tableau
	* array + i = deplace le pointeur de i position
	* '*' = dereferencement pour acceder a la valeur actuelle du pointeur
	* fonction pointÃ ©par cmp appel+valeur element de l'array comme argunt
	*/
			return (i);
		}
	}
	return (-1);

}
