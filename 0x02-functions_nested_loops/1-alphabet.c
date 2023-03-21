#include "main.h"
/**
 * print_alphabet - prints the english alphabet from a-z.
 * Return: Nothing.
 */
void printf_alphabet(void)
{
	char c;

	c = 'a';

	for (int i = 0; c <= 'z'; i++)
	{
		_putchar (c);

	}
}
int main(void)
{
	printf_alphabet();
	_putchar('\n');

	return (0);
}
