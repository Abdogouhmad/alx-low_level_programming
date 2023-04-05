#include"main.h"
#include <stdio.h>
/**
 * _print_rev_recursion -reverse string using recursion
 * @s: is the string that should be reversed
 * Return: void
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
