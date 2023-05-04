#include "main.h"
/*by div-styl*/
/**
 * flip_bits - returns the number of bits you would
 * @n: number one
 * @m: number two
 * Return: number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int read = 0;

	while (diff !=  0)
	{
		read++;
		diff = diff & (diff - 1);
	}
	return  (read);
}
