#include <stdio.h>
#include <stdlib.h>
/*by div-styl*/

/**
 * main -print
 * @argc: number of argu
 * @argv: matrixay of argu
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
int bit, index;
char *matrix;


	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}


	bit = atoi(argv[1]);


	if (bit < 0)
	{
		printf("Error\n");
		exit(2);
	}


	matrix = (char *)main;


	for (index = 0; index < bit; index++)
	{
		if (index == bit - 1)
		{
			printf("%02hhx\n", matrix[index]);
			break;
		}
		printf("%02hhx ", matrix[index]);
	}
return (0);
}
