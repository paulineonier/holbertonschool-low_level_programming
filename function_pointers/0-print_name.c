#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - execute a function who print a name
 * @name: parameter that function pointer needs
 * @f:function to execute
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
