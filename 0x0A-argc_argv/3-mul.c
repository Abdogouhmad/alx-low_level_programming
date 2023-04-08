#include <stdio.h>
#include <stdlib.h>
/*by div-styl*/
/**
 * main - multiplies only two numbers.
 * incase you gave up to 3 numbers the output: Error
 * @argc: argument count
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char  **argv)
{
	int i, sum;
	if (argc != 3)
		{
			printf("Error\n");
			return (1);
		}
	if (argc > 1)
	{
		sum = atoi(argv[1]);
		for (i = 2; i < argc; i++)
		{
			sum = sum * atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
return (0);
}
