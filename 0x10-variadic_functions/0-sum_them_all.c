#include "variadic_functions.h"
/*by div-style*/
/**
 * sum_them_all -function that returns the sum of all its parameters.
 * @n: the numbers that we will add
 * Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = 0;

	va_list add;

	va_start(add, n);

	for (; i < n; i++)
	{
		if (n == 0)
			return (0);
		sum += va_arg(add, const unsigned int);
	}
	va_end(add);
	return (sum);
}
