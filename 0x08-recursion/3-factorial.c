#include "main.h"
#include <stdio.h>
/*by div-styl*/
/**
 * factorial - multiplay each number starting of number 1 to end
 * @n: refers to the number we would apply the factorial
 * if the number is less than 0 the return -1
 * else if the number is equal to 0 return 1
 * then apply the facturail function
 * Return: the value
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
