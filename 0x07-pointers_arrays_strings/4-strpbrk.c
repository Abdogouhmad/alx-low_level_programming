#include"main.h"
#include <stdio.h>

/**
 * _strpbrk -function locates the first occurrence in the string
 * @s: ccurrence in the string s
 * @accept: f any of the bytes in the string accept
 * Return: the S
*/

char *_strpbrk(char *s, char *accept)
{

	char *a, *b;

	for (a = s; *a; a++)
	{
		for (b = accept; *b; b++)
			if (*a == *b)

				return (a);
	}
	return (NULL);
}
