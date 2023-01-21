/**
 * int_index - function that searches for an integer.
 * @array: arrays og integer.
 * @size: the number of elements in the array array
 * @cmp: a pointer to the function to be used to compare values.
 *
 * Return:  returns the index of the first element
 * If no element matches, return -1
 * If size <= 0, return -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, m;

	m = -1;
	if (array && cmp)
	{
		if (size <= 0)
		{
			return (m);
		}
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) > 0)
			{
				m = i;
				break;
			}
			if ((cmp(array[i]) == (-1)))
			{
				return (m); 
			}
		}
	}
	return (m); 
}
