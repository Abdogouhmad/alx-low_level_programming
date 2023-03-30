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
	int i = 0;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;

	for (i = 1; str[i] != '\0'; i++)
	{
		if ((str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
			 str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
			 str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
			 str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
			 str[i - 1] == '}') && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
		}
	}


	return (str);
}
