#include "main.h"
#include <stdio.h>
/**
 * _islower - checks if a number is lowercase
 * @c: character
 * Return: 1 if is lowercase, 0 else.
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
