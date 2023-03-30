#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - a function that concatenates two strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */


char *_strcat(char *dest, char *src)
{

    strcat(dest, src);
	return (dest);
}
