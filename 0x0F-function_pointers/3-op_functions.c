#include "3-calc.h"
#include <stdio.h>
/**
 *op_add - adds two values
 *@a: first value
 *@b: second value
 *Return: sum result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - substract value a - b
 *@a: first value
 *@b: second value
 *Return: substract result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiply two values
 *@a: first value
 *@b: second value
 *Return: Mult result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - returns the division result
 *if b == 0 returns null
 *@a: numerator
 *@b: denominator
 *Return: division result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 *op_mod - returns the mod between a and b
 *checks if b == 0
 *@a: denominator
 *@b: dividen
 *Return: reminder of a / b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);

}
