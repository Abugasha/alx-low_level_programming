#include <stdio.h>
/**
 *_memset -  sets memory values from *s to n quantity
 *@s: initial address
 *@b: value
 *@n: quantity of bytes
 *Return: pointer to the memory area of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char **pointer_to_s;
	unsigned int i;

	pointer_to_s = &s;
	for (i = 0; i < n; i++)
	{
		*(*pointer_to_s + i) = b;
	}
	return (*pointer_to_s);
}
