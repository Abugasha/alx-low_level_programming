#include "main.h"
/**
  *_strncpy - merge  two strings
  *
  *@dest: second string
  *@src: first string
  *@n: limit number
  *Return: a pointer, to dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != 0; i++)
		*(dest + i) = *(src + i);
	for (; i < n; i++)
		*(dest + i) = 0;
	return (dest);
}
