#include "main.h"
/**
 * _strlen - calculates the length of a string.
 * @str: input string
 * Return: length of string
 */
int _strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}