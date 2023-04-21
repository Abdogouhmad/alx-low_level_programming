#include "variadic_functions.h"
/*by div-styl*/
/**
 * print_all -print all words in the string
 * @format: the string
 * Return: void
*/
void print_all(const char * const format, ...)
{
	va_list arg;
	int i = 0;
	char *value;

	va_start(arg, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arg, int));
				break;
			case 'i':
				printf("%d", va_arg(arg, int));
				break;
			case 'f':
				printf("%f", va_arg(arg, double));
				break;
			case 's':
				{
					value = va_arg(arg, char *);
					if (value == NULL)
					{
						printf("(nil)");
						break;
					}
					printf("%s", value);
					break;
				}
			default:
				i++;
				continue;
		}
		if (format[i + 1])
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(arg);
}
