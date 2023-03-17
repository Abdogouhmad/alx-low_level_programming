#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = '0';

	for (i = '0'; i <= '9'; i++)
	{
		putchar (i);
	}
	int c = 'a';

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar (c);
	}
	putchar('\n');
	return (0);
}
