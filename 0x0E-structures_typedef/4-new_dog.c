#include "dog.h"
#include <stdlib.h>
/**
 * len - fun
 * @str: para
 *
 * Return: leng
 */
int len(const char *str)
{
	int leng = 0;

	while (*str++)
		leng++;
	return (leng);
}
/**
 * strcp - fun
 * @dest: para
 * @src: para
 *
 * Return: dest
 */
char *strcp(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - fun
 * @name: para
 * @age: para
 * @owner: para
 *
 * Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (len(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);

		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len(name) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = strcp(dog->name, name);
	dog->age = age;
	dog->owner = strcp(dog->owner, owner);
	return (dog);
}
