#include "main.h"
#define REALONG unsigned int
#define UREALONG unsigned long int
/**
 *clear_bit - clear bit in desired index
 *@n: input number
 *@index: index of binary number
 *Return: Binary value at selected index
 */
int clear_bit(UREALONG * n, REALONG index)
{
	UREALONG mask = 1;

	if (index > (sizeof(UREALONG) * 8) - 1)
		return (-1);
	mask = 1 << index;
	*n = *n & (~mask);
	return (1);
}
