#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr -gets the length of a prefix substring.
 * @s: is the string that we would like to count
 * @c: consists entirely of bytes
 * Return: the number of bytes that s holds
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; *s != '\0'; i++)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}

	return (NULL);
}
