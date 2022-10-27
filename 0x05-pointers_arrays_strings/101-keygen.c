#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char a[200];
	int i, acum = 0, valor;

	srand(time(NULL));
	for (i = 0; acum < 2772; i++)
	{
		if (acum < 2772 - 57)
		{
			valor = rand() % (57 - 48) + 48;
			acum = acum + valor;
		}
		else
		{
			valor = 2772 - acum;
			acum = valor + acum;
		}
		a[i] = valor;
	}
	printf("%s", a);
	return (0);
}
