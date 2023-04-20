#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/*by div-styl*/
/**
 * main -gets two number along with operation
 * @argc: the number of argu
 * @argv: the argument
 * Return: 0
*/
int main(int __attribute__((__unused__))argc, char *argv[])
{
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (get_op_func(argv[2]))
	{
		printf("%d\n", get_op_func(argv[2])(num1, num2));
	}
	else
	{
		printf("Error\n");
		exit(99);
	}
	return (0);
}
