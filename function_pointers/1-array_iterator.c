#include "function_pointers.h"
#include <stddef.h>

/* defines size_t */

/**
 * array_iterator - execute function on an array with a function pointeur
 * @array: array
 * @size: size of array
 * @action: pointer to function that we need to execute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i; /* initialisation i pour parcourir le tableau */

	if (array != NULL && action != NULL)
	/*verifie si array et fonction action = pas nul */
	{
		for (i = 0; i < size; i++) /* parcours l'array */
		{	action(*(array + i));
		}
	}

 /**
  * array =  pointeur vers premier element du tableau
  * array + i = deplace le pointeur de i elements
  * '*' = operateur deferencement pr accceder valeur a laquelle pointeur pointe
  * action = pointeur de fonction
  * (*(array + i)) = valeur de l'element du tableau
  */
}
