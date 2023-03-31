#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncpy -copy string from src and cpy to the dest path
 * @dest: the empty
 * @src: where will get this string
 * @n: the counter
 * Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
