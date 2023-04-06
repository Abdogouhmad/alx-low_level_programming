#include "main.h"
#include <stdio.h>
/*by div-styl*/
/**
 * is_palindrome - sees if the string is palindrome
 * @s: the string that we have to check
 * Return: the answer
*/
int is_palindrome(char *s)
{
	int stringlen = get_str_lenght(s);

	return (paliandrome_aid(s, 0, stringlen - 1));
}
/* by div-styl*/
/**
 * get_str_lenght - give the string len
 * @s: is the string
 * Return: the string len s
*/
int get_str_lenght(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + get_str_lenght(s + 1));
}
/* by div-styl*/
/**
 * paliandrome_aid - check if the string is plaindrome
 * @s: string
 * @a: indices
 * @z: indices
 * Return: the answer we need
*/
int paliandrome_aid(char *s, int a, int z)
{
	if (a >= z)
		return (1);
	if (s[a] != s[z])
		return (0);
	return (paliandrome_aid(s, a + 1, z - 1));
}
