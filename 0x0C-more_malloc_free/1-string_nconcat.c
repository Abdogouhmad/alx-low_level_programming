#include <stdlib.h>
#include "main.h"

/**
 * stringlen - calculates the length of a string.
 * @string: input string
 * Return: length of string
 */
int stringlen(char *string)
{
	int len = 0;

	while (string != NULL && *string != '\0')
	{
		len++;
		string++;
	}
	return (len);
}
/**
 * _strcopy - duplicate string from place to another
 * @src: the target location we will stock the string in
 * @dest: return string
 * @len: the index
 * Return: the str
 */
void _strcopy(char *dest, char *src, int len)
{
	int i = 0;

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[len] = '\0';
}
/**
 *string_nconcat -function that concatenates two strings.
 *@s1: 1st string
 *@s2: 2nd string
 *@n: size of string
 *Return: the string
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1 = 0, len2 = 0, i;
	char *answer;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = stringlen(s1);
	len2 = stringlen(s2);


	answer = (char *) malloc((len1 + n + 1) * sizeof(char));

	if (answer == NULL)
		return (NULL);

	_strcopy(answer, s1, len1);

	for (i = len1; i < n && s2[i - len1] != '\0'; i++)
	{
		answer[i] = s2[i - len1];
	}
return (answer);
}
