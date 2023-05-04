#include "bite.h"
/*by div-styl*/
/**
 * get_bit -returns the value of a bit at a given index.
 * @n: number to check bits in
 * @index: index at which to check bit
 * Return: value of the bit, or -1 if there is an error
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int done = 1;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	done <<= index;
	if (done & n)
		return (1);
	else
		return (0);
}
