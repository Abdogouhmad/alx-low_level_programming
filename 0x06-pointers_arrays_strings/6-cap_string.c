#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * cap_string - a function that capitalizes all words of a string.
 * @str: An input string to capitalize letters
 * Return: pointer to s
 */

char *cap_string(char *str)
{
	int len = strlen(str);
	int cap_next = 1;
	int i = 0;
	for (i = 0; i < len; i++)
	{
		if (isspace(str[i]) || ispunct(str[i]))
		{
			cap_next = 1;
		} else if (cap_next)
		{
			str[i] = toupper(str[i]);
			cap_next = 0;
		}
	}

	return (str);
}
