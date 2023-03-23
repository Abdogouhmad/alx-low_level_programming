#include "main.h"
/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9.
 * Do not print 2 and 4.
 * followed by a new line.
 * Return: Always 0
 */
void print_most_numbers(void)
{
	char c = '0';

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2' && c != '4')
			_putchar (c);
	}
	_putchar ('\n');
}
