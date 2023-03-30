#include "main.h"
#include <stdio.h>
#include <string.h>



char *string_toupper(char *up)
{
	char *start = up;

	while (*up)
	{
		if (*up >= 'a' && *up <= 'z')
			*up -= 32;
		up++;
	}
	return (start);
}