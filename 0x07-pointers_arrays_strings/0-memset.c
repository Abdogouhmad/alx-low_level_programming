#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _memset -fill the memory
 * @s: will be the filler to n
 * @n: is to be filledwith s
 * @b: is the constant
 * Return: the S
*/

char *_memset(char *s, char b, unsigned int n)
{

	memset(s, b, n);

	return (s);
}
