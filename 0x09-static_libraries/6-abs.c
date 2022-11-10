#include "main.h"
#include <stdio.h>
/**
 * _abs - checks if a number is positive, negative or zero
 * @n: number to evalue
 * Return: 1 absolute number value.
 *
 */
int _abs(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}
