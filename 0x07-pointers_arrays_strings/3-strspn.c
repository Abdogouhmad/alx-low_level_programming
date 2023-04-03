#include"main.h"
#include<stdio.h>
/**
 * _strspn - compare strings
 * @s:  locates the first occurrence in the string s
 * @accept: any of the bytes in the string accept
 * Return: lenstring
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int lenstring = 0;
	int found_it = 1;
	char *p, *q;

	for (p = s; *p; p++, lenstring++)
	{
		found_it = 0;
		for (q = accept; *q; q++)
		{
			if (*p == *q)
			{
				found_it = 1;
				break;
			}
		}
		if (found_it == 0)
			break;
	}

	return (lenstring);
}
