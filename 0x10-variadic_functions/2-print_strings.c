#include "variadic_functions.h"
/*by div-styl*/
/**
 * print_strings -function that prints strings, followed by a new line.
 * @separator: seprate between strings
 * @n: strings
 * Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int counter = n, i = 0;
	const char *spt = separator;
	const char *string;

	va_start(print, n);

	for (; i < counter; i++)
	{
		string = va_arg(print, const char *);

		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (spt != NULL && i != counter - 1)
			printf("%s", spt);
	}
	va_end(print);
	printf("\n");
}
