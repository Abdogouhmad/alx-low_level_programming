#include "main.h"
#include <stdlib.h>
/*by div-styl*/
/**
 * _strdup - duplicate string from place to another
 * @str: the target location we will stock the string in
 * Return: the str
*/
char *_strdup(char *str)
{
	int i = 0;
	unsigned int len = 0;
	char *duplicater;

	duplicater = (char *) malloc((len + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);
	else if (duplicater == NULL)
		return (NULL);

	for (; str < '\0'; len++)
	{
		len++;
	}
	for (i = 0; i <= len; i++)
	{
		duplicater[i] = str[i];
	}
	free(duplicater);
	return (str);
}
