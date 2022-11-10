#include <stdlib.h>
/**
 *array_range - array with the range of integer
 *@min: min integer value
 *@max: max integer value
 *Return: int array with min to max
 */
int *array_range(int min, int max)
{
	int n, *array, i;

	if (min > max)
		return (NULL);
	n = max - min;
	array = malloc((n + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		array[i - min] = i;
	}
	return (array);
}
