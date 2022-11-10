#include "main.h"
/**
  *_strncat - concatenates two strings
  *
  *@dest: second string
  *@src: first string
  *@n: till n
  *Return: a pointer, to dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int i, counter = 0;

	while (*(dest + counter) != 0)
	{
		counter++;
	}
	for (i = counter; i - counter < n; i++)
	{
		*(dest + i) = *(src + i - counter);
	}
	return (dest);
}
