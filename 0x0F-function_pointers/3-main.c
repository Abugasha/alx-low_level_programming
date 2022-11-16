#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 *main - console calculator using pointer to functions
 *@argc: quantity of arguments
 *@argv: data of arguments
 *Return: Execution status
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*pointer_to_function)(int, int);

	if (argc - 1 != 3  || argv[1] == NULL
			|| argv[3] == NULL || argv[2] == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*'
			&&  *argv[2] != '/' &&  *argv[2] != '%') || strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}
	pointer_to_function = get_op_func(argv[2]);
	if (pointer_to_function == NULL)
		return (0);
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	result = (*pointer_to_function)(a, b);
	printf("%d\n", result);
	return (0);
}
