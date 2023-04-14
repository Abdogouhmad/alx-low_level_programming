#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/*by div-styl*/
/**
 * is_digits -check if the character is num
 * @str: is a string or the argu
 * Return: 1
*/
int is_digits(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	return (1);
}

/**
 *multiply -multiply the arguments
*@num1: the 1st argument
*@num2: the 2nd argument
*Return: the sum
*/
int multiply(char *num1, char *num2)
{
	int sum = 0;

	sum = atoi(num1) * atoi(num2);
	return (sum);
}

/**
 *main -get the arguments from user
	*@argc: number of arguments
	*@argv: the arguments
	*Return: the total
	*/
int main(int argc, char *argv[])
{
	char *num1;
	char *num2;
	int total = 0;

	if (argc != 3 || !is_digits(argv[1]) || !is_digits(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	num1 = argv[1];
	num2 = argv[2];

	if (atoi(num1) <= 0 || atoi(num2) <= 0)
	{
		printf("Error\n");
		exit(98);
	}

	total = multiply(num1, num2);
	printf("%d\n", total);

	return (0);
}
