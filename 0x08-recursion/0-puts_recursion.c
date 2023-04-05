#include "main.h"
#include <stdio.h>
/*by div-styl*/
/**
 * _puts_recursion -string recursion
 * @s: recusing the string through if base condition
 * Return: void
*/
void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	 putchar (*s);
	 _puts_recursion(s + 1);


}
