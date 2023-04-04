#include "main.h"
#include <stdio.h>
/**
 * _strstr -function finds the first occurrence of string.
 *@haystack: the terminating null bytes (\0) are not compared
 *@needle: he terminating null bytes (\0) are not compared
 * Return: pointer or NUll
*/
char *_strstr(char *haystack, char *needle)
{
	char *g, *z;
	int d = 0;

	if (!*needle)
	return (haystack);

	for (; haystack[d]; haystack++)
	{
		g = &haystack[d];
		z = needle;
		for (; *g && *z && *g == *z; g++, z++)
		;

		if (!*z)
		{
			return (&haystack[d]);
		}
	}
	return (NULL);
}
