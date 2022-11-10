#include "main.h"
#include <stdio.h>
/**
 * _isalpha - checks if a number is lowercase
 * @c: character
 * Return: 1 if is lowercase, 0 else.
 *
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
