#include <stdio.h>
#include <stdlib.h>
int return_size(char *str);
/**
 *strtow - allocate matrix in the heap
 *@str: matrix col
 *
 *Return: matrix
 */
char **strtow(char *str)
{
	char **matrix;
	int i = 0, datos = 0, n = 0, cont = 0, *len_array;
	int word, letter, row, *init_array;

	if (*str == 0 || str == NULL)
		return (NULL);
	datos =  return_size(str);
	if (datos == 0)
		return (NULL);
	len_array = malloc(datos * sizeof(int));
	if (len_array == NULL)
		return (NULL);
	init_array = malloc(datos * sizeof(int));
	if (init_array == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ' && (str[i + 1] != ' ' && str[i + 1] != 0))
		{
			init_array[n] = i + 1;
			cont = 0;
		}
		else if (i == 0 && str[i] != ' ')
		{
			init_array[n] = i;
			cont++;
		}
		cont++;
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == 0))
		{
			len_array[n] = cont - 1;
			if (len_array[n] == 0)
				return (NULL);
			n++;
		}
	}
	matrix = (char **)malloc((datos + 1) * sizeof(char *));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i < datos; i++)
	{
		matrix[i] = (char *)malloc((len_array[i] + 1) * sizeof(char));
		if (matrix[i] == NULL)
		{
			for (row = i - 1; row >= 0; row--)
			{
				free(matrix[row]);
			}
			free(matrix);
			return (NULL);
		}
	}
	for (word = 0; word < datos; word++)
	{
		for (letter = 0; letter < len_array[word]; letter++)
		{
			matrix[word][letter] = str[init_array[word] + letter];
		}
		matrix[word][letter] = 0;
	}
	matrix[word] = NULL;
	free(init_array);
	free(len_array);
	return (matrix);
}

/**
 *return_size - return number of elements separate by spaces
 *@str: input string
 *Return: number of words
 */
int return_size(char *str)
{
	int i, datos = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ' && (str[i + 1] != ' ' && str[i + 1] != 0))
			datos++;
		else if (i == 0 && str[i] != ' ')
			datos++;
	}
	return (datos);
}
