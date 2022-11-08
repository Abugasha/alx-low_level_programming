#include <stdio.h>
#include <stdlib.h>
/**
 *argstostr - allocate matrix in the form of memory
 *@ac: matrix col
 *@av: matrix row
 *Return: matrix
 */
char *argstostr(int ac, char **av)
{
	char *array;
	int i = 0, row = 0, count = 0, acum = 0, bu = 0;

	if (ac == 0 || av  == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		while (av[i][count] != 0)
			count++;
		acum = count + acum;
		count = 0;
	}
	acum = acum + i + 1;
	array = (char *)malloc(acum * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (row = 0; row < ac; row++)
	{
		while (av[row][count])
		{
			array[bu + count] = av[row][count];
			count++;
		}
		array[bu + count] = '\n';
		bu = count + 1 + bu;
		count = 0;
	}
	return (array);
}
