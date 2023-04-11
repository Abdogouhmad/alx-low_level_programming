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
	unsigned int i = 0;
	unsigned int len = 0;
	char *duplicater;

	if (str == NULL)
	return (NULL);

	for (; str[len] != '\0'; len++)
	{

	}
	duplicater = (char *) malloc((len + 1) * sizeof(char));

	if (duplicater == NULL)
	return (NULL);

	for (i = 0; i <= len; i++)
	{
		duplicater[i] = str[i];
	}
	return (duplicater);
}
