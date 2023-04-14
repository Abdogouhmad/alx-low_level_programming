#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*by div-styl*/
/**
 *multy -mutlyplay the agruments
 *@num1: the 1st argu
 *@num2: the 2nd argu
 *Return: the sum
 */
int multy(char *num1, char *num2)
{
	int sum = 0, i = 0;

	for (i; num1[i] != '\0')
	{
		if (!isdigit(num1[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	for (i; num2[i]; i++)
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
 *main -get the argu from user
 *@argc: numb of argu
 *@argv: the argu
 *Return: the total
*/


int main(int argc, char argv[])
{
	int nm1, nm2, total = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	nm1 = atoi(argv[1]);
	nm2 = atoi(argv[2]);

	if (nm1 == 0 || nm2 == 0)
	{
		printf("Error\n");
		exit(98);
	}
	sum = multy(argv[1], argv[2]);
	printf("%d\n", sum);
	return (0);
}
