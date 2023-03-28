/*
 * File: 101-keygen.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the
 *        program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	char pass[99];
	int total = 0;
	int i;

	srand(time(0));

	while (total <= 2646)
	{
		char c = (char)(rand() % 94 + 33);

		pass[i] = c;
		total += c;
		i++;
	}

	pass[i] = (char)(2772 - total);

	printf("%s", pass);

	return (0);
}
