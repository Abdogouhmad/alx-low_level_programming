#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: An input string
 * Return: Nothing
 */

void puts_half(char *str)
{
int length_of_the_string = strlen(str);
int i = 0;

	for (i = length_of_the_string / 2; i < length_of_the_string; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\0');
	printf("\n");
}
