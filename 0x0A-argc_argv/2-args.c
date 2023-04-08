#include <stdio.h>
/*by div-styl*/
/**
 * main - printf the arguments of the program
 * @argc: is the number of the argument
 * @argv: is the array of the argumet (string)
 * Return: 0
*/
int main(int argc, char **argv)
{
	int i = 1;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
