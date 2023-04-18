#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - function that calculates lenght of a string
 * @str: the string to be calculated
 * Return: lenght of a string
 */
int _strlen(char *str)
{
	int s = 0;

	while (str[s] != '\0')
		s++;
	return (s);
}
/**
 * _strcpy - fuction that copies a string to another string
 * @src: string to be copied to dest
 * @dest: string to be copied to src
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int t;

	for (t = 0 ; src[t] ; t++)
	{
		dest[t] = src[t];
	}
	dest[t] = '\0';

	return (dest);
}
/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int n, w;

	n = _strlen(name);
	w = _strlen(owner);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	d->name = malloc((n + 1) * sizeof(char));
	if (d->name == NULL)
	{
		free(d);
	return (NULL);
	}
	d->owner = malloc((w + 1) * sizeof(char));
	if (d->owner == NULL)
	{
		free(d);
	free(d->name);
	return (NULL);
	}
	_strcpy(d->name, name);
	_strcpy(d->owner, owner);
	d->age = age;

		return (d);
}
