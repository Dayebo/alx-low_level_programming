#include"function_pointers.h"
#include<stdlib.h>

/**
 * array_iterator - print each array elem on a newl
 * @array: array
 * @size: how many element to print
 * @action: pointer to print
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

