#include "variadic_functions.h"
/*by div-styl*/
/**
 * print_numbers -function that prints numbers, followed by a new line.
 * @separator: the sprt between numbers
 * @n:numbers
 * Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, cnt = n;
	const char *sprt = separator;
	va_list num;

	va_start(num, n);

	for (i = 0; i < cnt; i++)
	{
		printf("%d", va_arg(num, const unsigned int));

		if (sprt != NULL && i != cnt - 1)
			printf("%s", separator);
	}
	va_end(num);
	printf("\n");
}
