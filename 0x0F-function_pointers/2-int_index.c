#include <stdlib.h>
/**
 *int_index - returns the index of the first element
 *for which the cmp function does not return 0
 *@array: array to look for integer
 *@size: size of the array
 *@cmp: comparison logic
 *Return: Integer if works -1 if fails
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || array == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
	}
	return (-1);
}
