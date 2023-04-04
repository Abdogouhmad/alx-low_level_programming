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
	int counter = 0, answer1 = 0, answer2 = 0;

	for (counter = 0; counter < size; counter++)
	{
		answer1 += *(a + counter * size + counter);
	}

		for (counter = 0; counter < size; counter++)
	{
		answer2 += *(a + counter * size + (size - 1 - counter));
	}
	printf("%d, %d \n", answer1, answer2);

}
