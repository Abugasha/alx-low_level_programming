#include "main.h"
/**
  *_strcat - concatenates two strings
  *
  *@dest: second string
  *@src: first string
  *Return: a pointer, to dest
  */
char *_strcat(char *dest, char *src)
{
	int i, counter = 0;

	while (*(dest + counter) != 0)
	{
		counter++;
	}
	for (i = counter;  src[i - counter] != 0; i++)
	{
		*(dest + i) = *(src + i - counter);
	}
	return (dest);
}
