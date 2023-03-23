#include "main.h"

/**
   * more_numbers - a function that prints 10 times the numbers, from 0 to 14,
   * followed by a new line.
   * Return: Always 0
 */
void more_numbers(void)
{
	int i = 0;
	int c = 0;

	while (i < 10)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			{
				_putchar (c / 10 + '0');
			}
			_putchar (c % 10 + '0');
		}
		i++;
		_putchar ('\n');
	}
}
