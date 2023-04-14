#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*by div-styl*/
/**
 * multiply - multiply the arguments
 * @num1: the 1st argument
 * @num2: the 2nd argument
 * Return: the sum
 */
int multiply(char *num1, char *num2)
{
	int sum = 0;
	int i = 0;

	// Check if num1 contains only digits
	for (i = 0; num1[i] != '\0'; i++)
	{
		if (!isdigit(num1[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}

	// Check if num2 contains only digits
	for (i = 0; num2[i]; i++)
	{
		if (!isdigit(num2[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}

	sum = atoi(num1) * atoi(num2);
	return (sum);
}

/**
 * main - get the arguments from user
 * @argc: number of arguments
 * @argv: the arguments
 * Return: the total
 */
int main(int argc, char *argv[])
{
	int num1, num2, total = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (num1 <= 0 || num2 <= 0)
	{
		printf("Error\n");
		exit(98);
	}

	total = multiply(argv[1], argv[2]);
	printf("%d\n", total);

	return (0);
}
