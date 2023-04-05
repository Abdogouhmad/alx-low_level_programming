#include "main.h"
#include <stdio.h>
/* by div-styl*/
/**
 * _pow_recursion -factorial
 * @x: 1st number
 * @y: 2nd number
 * Return: the value of pow
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y  - 1));
}
