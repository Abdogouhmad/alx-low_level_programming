#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - calculates the length of a string.
 * @str: input string
 * Return: length of string
 */
int _strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}
/**
 * _strcopy - duplicate string from place to another
 * @src: the target location we will stock the string in
 * @dest: return string
 * @len: the index
 * Return: the str
 */
void _strcopy(char *dest, char *src, int len)
{
	int i = 0;

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[len] = '\0';
}
/**
 * strtow - splits a string into wrd.
 * @str: input string
 * Return: array of wrd
 */
char **strtow(char *str)
{
	int i = 0, len = 0,  w = 0, j = 0;
	int index = 0, beginning = 0, inw = 0, wrdlen = 0;
	char **wrd;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	len = _strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			w++;
	}
	wrd = (char **)malloc((w + 1) * sizeof(char *));
		if (wrd == NULL)
			return (NULL);
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && !inw)
			inw = 1;
			beginning = i;
		if ((str[i] == ' ' || i == len - 1) && inw)
		{
			inw = 0;
			wrdlen = i - beginning + (i == len - 1 ? 1 : 0);
			wrd[index] = (char *)malloc((wrdlen + 1) * sizeof(char));
			if (wrd[index] == NULL)
				for (j = 0; j < index; j++)
					free(wrd[j]);
				free(wrd);
				return (NULL);
			_strcopy(wrd[index], &str[beginning], wrdlen);
			index++;
		}
	}
	wrd[w] = NULL;
	return (wrd);
}
