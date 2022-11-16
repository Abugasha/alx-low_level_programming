#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints the opcode of its own main function
i*@argc: quantity of params
 *@argv: params content
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int bytes_number, i;
	unsigned char *pointer;

	if (argc - 1 != 1)
	{
		printf("Error\n");
		exit(1);
	}
	bytes_number = atoi(argv[1]);
	if (bytes_number < 0)
	{
		printf("Error\n");
		exit(2);
	}
	pointer = (unsigned char *)main;
	for (i = 0; i < bytes_number; i++)
	{
		printf("%02x", *(pointer + i));
		if (i == bytes_number - 1)
			printf("\n");
		else
			printf(" ");
	}
	return (0);
}


