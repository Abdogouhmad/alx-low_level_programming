#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -prints the sum of the two diagonals.
 * @a: the array
 * @size: size of the array
 * Return; void
*/
void print_diagsums(int *a, int size)
{
	int counter = 0, sum1 = 0, sum2 = 0;

	for (counter = 0; counter < size; counter++)
	{
		sum1 += *(a + counter * size + counter);
	}

		for (counter = 0; counter < size; counter++)
	{
		sum2 += *(a + counter * size + (size - 1 - counter));
	}
	printf("%d, %d \n", sum1, sum2);

}
