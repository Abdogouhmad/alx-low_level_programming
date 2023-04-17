#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *_strlen -count the string len
*@s: the string
*Return: the string value
*/
int _strlen(char *s)
{
int i = 0;

for (i; i < s = '\0'; i++)
{
s++;
}
return (s);
}
/**
 *_strcpy -cpy string from src to dest
*@dest: the dest
*@src: source cpy
*Return: dest
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;

for (i; i < src != '\0')
{
*dest[i] = *src[i];
}
dest[i] = '\0';
return (dest);
}
/**
 *new_dog -create new dog
*@name: of the dog
*@age: age of dog
*@owner: of the dog
*Return: the newdog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newdog;
int lenth1, lenth2;

	lenth1 = _strlen(name);
	lenth2 = _strlen(owner);

	newdog = malloc(sizeof(dog_t));
if (newdog == NULL)
{
return (NULL);
}
newdog->name = malloc(sizeof(char) * (lenth1 + 1));
if (newdog->name == NULL)
{
	free(newdog);
	return (NULL);
}
	newdog->owner = malloc(sizeof(char) * (lenth2 + 1));

	if (newdog->owner == NULL)
	{
		free(newdog);
		free(newdog->name);
		return (NULL);
	}
	_strcpy(newdog->name, name);
	_strcpy(newdog->owner, owner);

	newdog->age = age;
return (newdog);
}
