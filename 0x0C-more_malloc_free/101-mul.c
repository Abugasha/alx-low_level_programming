#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *main - main function
 *@argc: quantity
 *@argv: values
 *Return: 0
 */
int main(int argc, char **argv)
{
	if (argc - 1 != 2)
	{
		printf("Error\n");
		exit(98);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
