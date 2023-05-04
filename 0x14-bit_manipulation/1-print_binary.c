#include "main.h"
/*by div-styl*/
/**
 * print_binary - print binary
 * @n: number
 * Return: void
*/
void print_binary(unsigned long int n)
{
	unsigned  long int i = 1;
	int count = sizeof(n) * 8 - 1, lp;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while ((n & (i << count)) == 0)
		count--;
	for (lp = count; lp >= 0; lp--)
	{
		if ((n & (i << lp)))
			_putchar('1');
		else
			_putchar('0');
	}
}
