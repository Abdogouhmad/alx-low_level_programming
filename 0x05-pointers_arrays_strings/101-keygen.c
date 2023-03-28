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
char ps[80];
int sum = 0, i = 0;
srand(time(0));

for (; sum <= 2772 - 121; i++)
{
	char c = rand() % 94 + 33;

	ps[i] = c;
	sum += c;
}
ps[i] = 2772 - sum;
printf("%s\n", ps);
	return (0);
}
