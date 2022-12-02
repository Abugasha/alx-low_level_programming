#include "main.h"
/**
 *power - returns the power of base to exp
 *@base: mult base
 *@exp: mult exp
 *Return: base**exp
 */
int power(int base, int exp)
{
	int i, result = 1;

	for (i = 0; i < exp; i++)
		result *= base;
	return (result);
}
/**
 *binary_to_uint - converts a binary in an array to uint
 *@b: array with 0's and 1's
 *Return: uint number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int output = 0;
	int length = 0, i;

	if (b == NULL)
		return (0);
	while (*(b + length) != 0)
		length++;
	length--;
	for (i = 0; i <= length; i++)
	{
		if (b[length - i] == '0' || b[length - i] == '1')
		{
			output = (b[length - i] - 48) * power(2, i) + output;
		}
		else
			return (0);
	}
	return (output);
}
