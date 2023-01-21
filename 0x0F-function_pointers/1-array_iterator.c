#include <stdio.h>

/**
 * array_iterator - function executes a parameter on each element of an array.
 * @array: array of element.
 * @size: the size of the array
 * @action: a pointer to the function you need to use
 *
 * Return: void.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
