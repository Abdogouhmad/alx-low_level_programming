#include "main.h"
#include "stdlib.h"
#include <stdio.h>
/*by div-styl*/

/**
 * stringlen - calculates the length of a string.
 * @string: input string
 * Return: length of string
 */
int stringlen(char *string)
{
	int len = 0;

	while (string != NULL && *string)
	{
		len++;
		string++;
	}
	return (len);
}
/**
 * _strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 * @dest: A pointer to destination of string
 * @src: A pointer to source string to copy from
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, const char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
/**
 * 
 * 
 * 
 * 
 * 
*/
char *argstostr(int ac, char **av)
{
    int lensum = 0, i = 0, add = 0;
    char *rst;
    if (ac == 0 || av == 0)
        return (NULL);

    for (; i < ac; i ++)
    {
        lensum += stringlen(av[i]);
    }
    lensum += ac;
    rst = (char*) malloc((lensum + 1) * sizeof(char));
        if (rst == NULL)
            return (NULL);
    
    for (; i < ac; i++)
    {
        _strcpy (rst + add, av[i]);
        add += stringlen(av[i]);
        rst [add++] = '\n';
    }
    rst[add] = '\0';
    return (rst);
 }

 int main(int ac, char *av[])
{
    char *s;

    s = argstostr(ac, av);
    if (s == NULL)
    {
        return (1);
    }
    printf("%s", s);
    free(s);
    return (0);
}