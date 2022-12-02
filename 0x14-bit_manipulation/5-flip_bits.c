#include "main.h"
#define UREALONG unsigned long int
#define REALONG unsigned int
/**
 *flip_bits - clear bit in desired index
 *@n: input number A
 *@m: input number B
 *Return: Quantity of bits
 */
REALONG flip_bits(UREALONG n, UREALONG m)
{
	UREALONG difference, i;
	int count = 0;

	difference = n ^ m;
	for (i = 0; i < (sizeof(UREALONG) * 8); i++)
	{
		if ((difference >> i) & 1)
			count++;
	}
	return (count);
}
