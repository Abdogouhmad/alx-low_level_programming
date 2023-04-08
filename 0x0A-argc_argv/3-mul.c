#include <stdio.h>
#include <stdlib.h>
/*by div-styl*/
/**
 * main - that multiplies two numbers.
 * @argc: is the number of the argument
 * @argv: is the array of the argumet (input)
 * Return: 0
*/
int main(int argc, char  **argv)
{
	int i, sum;

	if (argc > 1)
	{
		sum = atoi(argv[1]);
		for (i = 2; i < argc; i++)
		{
			sum = sum * atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
return (0);
}
