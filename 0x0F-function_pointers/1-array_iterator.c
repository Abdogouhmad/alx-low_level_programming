#include "function_pointers.h"
/*by div-styl*/
/**
 * array_iterator -function that executes a function given
 * as a parameter on each element of an array.
 * @array: array we are going to iterate
 * @size: size of the array
 * @action: functional pointer
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
