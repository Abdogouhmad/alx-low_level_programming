#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Returns the add
 * @a: The first number.
 * @b: The second number.
 *
 * Return: a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the sub
 * @a: The first number.
 * @b: The second number.
 *
 * Return: a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns the multy
 * @a: The first number.
 * @b: The second number.
 *
 * Return: a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the divi
 * @a: The first number.
 * @b: The second number.
 *
 * Return: a and b
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
 * op_mod - Returns the modulo
 * @a: The first number.
 * @b: The second number.
 *
 * Return: a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
