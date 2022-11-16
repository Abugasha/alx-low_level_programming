#include <stdlib.h>
/**
 *print_name - prints the name of a person using a requested
 *function
 *@name: person name
 *@f: pointer to function
 *Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		(*f)(name);
}
