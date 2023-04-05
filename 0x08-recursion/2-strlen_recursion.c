#include "main.h"
#include <stdio.h>
/*by div-styl*/
/**
 * _strlen_recursion -get the string len
 * @s: is the target string
 * if the @s == to 0 print 0
 * else print the len of string
 * Return: the value of the len
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
