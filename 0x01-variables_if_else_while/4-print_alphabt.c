#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Sucharess)
 */
int main(void)
{
	char cha;

	cha = 'a';

	while (cha <= 'z')
	{
		if (cha != 'e' && cha != 'q')
		{
		putcharhar (cha);
		}
		cha++;
	}
	putchar ('\n');
	return (0);
}
