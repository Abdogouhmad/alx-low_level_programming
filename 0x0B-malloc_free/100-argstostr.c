#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * stringlen - calculates the length of a string.
 * @string: input string
 * Return: length of string
 */
int stringlen(char *string)
{
	int len = 0;

	while (string != NULL && *string != '\0')
	{
		len++;
		string++;
	}
	return (len);
}

/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: array of arguments
 * Return: concatenated string
 */
char *argstostr(int ac, char **av)
{
	int lensum = 0, i = 0, add = 0, j = 0;
	char *rst;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++)
	{
		lensum += stringlen(av[i]);
	}
	lensum += ac;
	rst = (char *) malloc((lensum + 1) * sizeof(char));
	if (rst == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			rst[add++] = av[i][j];
		}
		rst[add++] = '\n';
	}
	rst[add] = '\0';
	return (rst);
}
