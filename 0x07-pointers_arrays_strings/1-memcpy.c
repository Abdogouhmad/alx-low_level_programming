#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _memcpy - cpy n from src and past to dest
 * @n: is the byte we have to cpy
 * @src: the place where byte is located
 * @dest: will host the cpy operation
 * Return: dest with new value
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{

	memcpy(dest, src, n);
	return (dest);

}
