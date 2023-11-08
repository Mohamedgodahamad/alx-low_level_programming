#include "function_pointers.h"
#include <stdio.h>
/**
 *array_iterator - executes a function given as a parameter
 *on each element of an array
 *@array: array to be printed
 *@size: size of array
 *@action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
