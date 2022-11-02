#include "main.h"
#include <stdio.h>
/**
 *wildcmp - compare and also uses wildcards
 *@s1: string 1
 *@s2: string 2
 *Return: 1 if is equal 0 if is not
 *
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == 0)
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else
		return (0);
}
