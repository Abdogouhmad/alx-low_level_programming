#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * string_toupper -make the alphabets in uppercases
 * @up: is the function that help with this task
 * Return: return the function
*/

char *string_toupper(char *up)
{
	char *start = up;

	while (*up)
	{
		if (*up >= 'a' && *up <= 'z')
			*up -= 32;
		up++;
	}
	return (start);
}
