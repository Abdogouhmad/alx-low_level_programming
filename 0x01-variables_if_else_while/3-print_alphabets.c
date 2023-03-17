#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	char a;

	c = 'a';
	a = 'A';

	while (c <= 'z')
	{
		putchar (c);
		c++;
	}
	while (a <= 'Z')
	{
		putchar (a);
		a++;
	}
	putchar ('\n');
	return (0);
}
