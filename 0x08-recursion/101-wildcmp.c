#include "main.h"
#include <stdio.h>
/* by div-styl*/
/**
 * wildcmp -compares two strings
 * @s1: the first string
 * @s2: the 2nd string
 * Return: 1 for indentical otherwise 0
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*')
		if (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)))
			return (1);
	if (*s1 == *s2 || *s2 == '?')
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
