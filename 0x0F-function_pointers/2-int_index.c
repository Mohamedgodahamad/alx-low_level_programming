#include "function_pointers.h"
#include <stdio.h>
/**
 *int_index - searches for an integer
 *@array: an array to be compared
 *@size: size of array
 *@cmp: a function pointer
 *Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

        if (size <= 0 || array == NULL || cmp == NULL)
		return -1;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return i;
	}
	return -1;

}
