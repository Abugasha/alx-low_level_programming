#include "main.h"
/**
  *_strcmp - merge  two strings
  *
  *@s1: second string
  *@s2: first string
  *
  *Return: number with difference
  */
int _strcmp(char *s1, char *s2)
{
	int i;
	int differ;

	for (i = 0; s1[i] != 0; i++)
	{
		differ = *(s1 + i) - *(s2 + i);
		if (*(s1 + i) == *(s2 + i))
		{
			continue;
		}
		else
		{
			break;
		}
	}
	return (differ);
}
