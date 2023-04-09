#include <stdio.h>
#include <stdlib.h>
/*by div-styl*/
/**
 * main -prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: number of arguments
 * @argv: the input statment
 * Return: the rquired value
*/
int main(int argc, char **argv)
{

	int cnt, lenar, sum = 0, i = 0;
	int arr [] = {25, 10, 5, 2, 1};

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	cnt = atoi(argv[1]);

	if (argc < 0)
	{
		printf("0\n");
	}
	lenar = sizeof(arr) / sizeof(arr[0]);

	for (; i < lenar && cnt > 0; i++)
	{
		sum += cnt / arr[i];
		cnt %= arr[i];
	}
	printf("%d\n", sum);
	return (0);
}
