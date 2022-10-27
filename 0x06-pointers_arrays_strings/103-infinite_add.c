#include "main.h"
#include <stdio.h>
int _strlen(char *s);

/**
  *infinite_add - add two numbers that are chars
  *@n1: first number
  *@n2: second number
  *@r: result buffer
  *@size_r: size of result buffer
  *Return: number with difference
  */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, max,  max_n1, max_n2;
	int carry = 0, value = 0;
	char aux_arr1[100];
	char aux_arr2[50];

	max_n1 = _strlen(n1);
	max_n2 = _strlen(n2);
	if (max_n1 > max_n2)
	{
		max = max_n1;
		for (i = max; i > 0; i++)
		{
			aux_arr1[max] = n1[i];
			if (i >= (max - max_n2))
				aux_arr2[i] = n2[i - max - max_n2];
			else
				aux_arr2[i] = '0';
		}
	}
	else
	{
		max = max_n2;
		for (i = 0; i < max; i++)
		{
			aux_arr1[i] = n2[i];
			if (i >= (max - max_n1))
				aux_arr2[i] = n1[i - max - max_n1];
			else
				aux_arr2[i] ='0';
		}
	}
	printf("valor maximo: %d \n", max);
	printf("auxiliar 1: %s \n", aux_arr1);
	printf("auxiliar 2: %s \n", aux_arr2);
	printf("original 1: %s \n", n1);
	printf("original 2: %s \n", n2);
	for (i = 0; i < size_r; i++)
	{
		value = (aux_arr1[max - 1 - i] - '0') + (aux_arr2[max - 1 - i] - '0');
		value = value + carry;
		r[size_r - 1 - i] = value % 10 + '0';
		carry = value / 10;
	}
	return (r);
}

/**
 *_strlen - returns data len
 *@s: input string
 *
 *Return:an int number
 *
 */
int _strlen(char *s)
{
	int counter = 0;

	while (*(s + counter) != 0)
	{
	counter++;
	}
	return (counter);
}
