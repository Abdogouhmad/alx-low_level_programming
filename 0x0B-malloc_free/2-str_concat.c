#include "main.h"
#include <stdlib.h>

/**
 * stringlen - calculates the length of a string.
 * @string: input string
 * Return: length of string
 */
int stringlen(char *string)
{
	int len = 0;

	while (string != NULL && *string)
	{
		len++;
		string++;
	}
	return (len);
}

/**
 * str_concat - concatenates two strings.
 * @s1: 1st string
 * @s2: 2nd string
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int ls1 = 0, ls2 = 0, i = 0;
	char *stringcnt;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}


	ls1 = stringlen(s1);
	ls2 = stringlen(s2);

	stringcnt = (char *)malloc((ls1 + ls2 + 1) * sizeof(char));

	if (stringcnt == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		stringcnt[i] = s1[i];
	}

	for (i = 0; s2[i] != '\0'; i++)
	{
		stringcnt[ls1 + i] = s2[i];
	}

	stringcnt[ls1 + ls2] = '\0';

	return (stringcnt);
}
