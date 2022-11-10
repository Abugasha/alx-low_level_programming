#include <stdlib.h>
/**
 *malloc_checked - function that shows if malloc can work, and return pointer
 *@b: memory size to reserve
 *Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	if (b <= 0)
		exit(98);
	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
