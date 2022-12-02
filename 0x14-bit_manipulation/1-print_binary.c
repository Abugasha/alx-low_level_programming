#include "main.h"
void recursive_helper(unsigned long int n);
/**
 *print_binary - prints decimal number in binary
 *@n: input number
 *Return: Nothing but prints in stdout the binary series
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else
		recursive_helper(n);
}

/**
 *recursive_helper - prints decimal number in binary
 *@n: input number
 *Return: Nothing but prints in stdout the binary series
 */
void recursive_helper(unsigned long int n)
{
	if (n == 0)
	{
		return;
	}
	recursive_helper(n >> 1);
	_putchar(n - 2 * (n >> 1) + '0');
}

