#include "main.h"
#define REALONG unsigned int
#define UREALONG unsigned long int
int recursive_helper(UREALONG n, REALONG index, REALONG counter);
/**
 *get_bit - gets bit in desired index
 *@n: input number
 *@index: index of binary number
 *Return: Binary value at selected index
 */
int get_bit(UREALONG n, REALONG index)
{
	REALONG counter = 0;
	int result = 0;

	if (index > (sizeof(UREALONG) * 8) - 1)
		return (-1);
	result = recursive_helper(n, index, counter);
	return (result);
}

/**
 *recursive_helper - prints decimal number in binary
 *@n: input number
 *@index: index of binary search
 *@counter: counter to find index
 *Return: Nothing but prints in stdout the binary series
 */
int recursive_helper(UREALONG n, REALONG index, REALONG counter)
{
	int result;

	if (counter == index)
		return (n - 2 * (n >> 1));
	result = recursive_helper(n >> 1, index, ++counter);
	return (result);
}
