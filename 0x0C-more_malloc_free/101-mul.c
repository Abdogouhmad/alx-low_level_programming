#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * is_digits - check if the character is a digit
 * @str: the string or the argument to check
 * Return: 1 if all characters are digits, 0 otherwise
 */
int is_digits(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
	if (str[i] < '0' || str[i] > '9')
		return (0);
}
return (1);
}

/**
 * _atoi - converts a string to an integer
 * @buff: the string to convert
 * Return: the integer value of the string
 */
int _atoi(char *buff)
{
int n = 0, digit_ = 1;
size_t len;
len = strlen(buff);
while (len-- > 0)
{
	if (len - 1 == 0)
	{
		if (buff[0] == '-')
		{
			n *= -1;
			break;
		}
	}

	n += ((buff[len - 1] - '0') * digit_);
	digit_ *= 10;
}
return (n);
}

/**
 * multiply - multiply the arguments
 * @num1: the 1st argument
 * @num2: the 2nd argument
 * Return: the product of the arguments
 */
int multiply(char *num1, char *num2)
{
int sum = 0;
sum = _atoi(num1) * _atoi(num2);
return (sum);
}

/**
 * main - get the arguments from user
 * @argc: number of arguments
 * @argv: the arguments
 * Return: the total
 */
int main(int argc, char *argv[])
{
char *num1;
char *num2;
int total = 0;

if (argc != 3 || !is_digits(argv[1]) || !is_digits(argv[2]))
{
	printf("Error\n");
	exit(98);
}
num1 = argv[1];
num2 = argv[2];

if (_atoi(num1) <= 0 || _atoi(num2) <= 0)
{
	printf("Error\n");
	exit(98);
}

total = multiply(num1, num2);
printf("%d\n", total);

return (0);
}
