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
	int firstnumber, secondnumber;
	char *op;


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}


	firstnumber = atoi(argv[1]);
	op = argv[2];
	secondnumber = atoi(argv[3]);


	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}


	if ((*op == '/' && secondnumber == 0) ||
		(*op == '%' && secondnumber == 0))
	{
		printf("Error\n");
		exit(100);
	}


	printf("%d\n", get_op_func(op)(firstnumber, secondnumber));


	return (0);


}
