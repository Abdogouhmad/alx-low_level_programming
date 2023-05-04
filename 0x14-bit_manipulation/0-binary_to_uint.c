#include "bite.h"
/*by div-styl*/
/**
 * binary_to_uint - convert from binary to decimal
 * @b: the number to convert
 * Return: the number converted
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int final = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	for (; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		final = final << 1;
		if (b[i] == '1')
			final  += 1;
	}

	return (final);

}
