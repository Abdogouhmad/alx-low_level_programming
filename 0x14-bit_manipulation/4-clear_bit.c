#include "main.h"
/*by div-styl*/
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number to set
 * @index: index at which to set bit
 * Return: 1 if it worked, or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set = 1;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	set = ~(set << index);
	*n = *n & set;
	return (1);
}
