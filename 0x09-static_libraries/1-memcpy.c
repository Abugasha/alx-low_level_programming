#include <stdio.h>
/**
 *_memcpy -  copie memory values from *src to *dest
 *@dest: destiny address
 *@src: initial addres
 *@n: quantity of bytes
 *Return: pointer to the memory area of dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char **pointer_to_s, **pointer_to_d;
	unsigned int i;

	pointer_to_s = &src;
	pointer_to_d = &dest;
	for (i = 0; i < n; i++)
	{
		*(*pointer_to_d + i) = *(*pointer_to_s + i);
	}
	return (*pointer_to_d);
}
