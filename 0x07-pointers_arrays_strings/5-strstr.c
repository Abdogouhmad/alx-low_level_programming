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
	char *a, *b;
	int i = 0;

	if (!*needle)
	return (haystack);

	for (; haystack[i]; haystack++)
	{
		a = &haystack[i];
		b = needle;
		for (; *a && *b && *a == *b; a++, b++)
		;

		if (!*b)
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}
