#include "main.h"
/**
 * _strdup - duplicate string from place to another
 * @str: the target location we will stock the string in
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