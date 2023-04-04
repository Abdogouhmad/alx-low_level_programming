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
	int i, answer1, answer2;

	answer1 = answer2 = 0;
	for (i = 0; i < size; i++)
	{
	answer1 += *(a + i * size + i);
	answer2 += *(a + i * size + (size - 1 - i));
	}
printf("%d, %d\n", answer1, answer2);
}
