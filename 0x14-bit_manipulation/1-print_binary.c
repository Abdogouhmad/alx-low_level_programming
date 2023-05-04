#include "main.h"
/*by div-styl*/
/**
 * print_binary - print binary
 * @n: number
 * Return: void
*/
void print_binary(unsigned long int n)
{
	unsigned long int take = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (take <= n)
		take =  take << 1;
	take =   take >> 1;
	while (take > 0)
	{
		if (n & take)
			_putchar('1');
		else
			_putchar('0');
		take =  take / 2;
	}
}
