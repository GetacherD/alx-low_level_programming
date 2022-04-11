#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_cpy -copy char buffer
 * @src: source
 * @dest: destination
 *
 * Description: copy strings
 *
 * Return: pointer to destination
 */
void str_cpy(char *src, char *dest)
{
	char *cp;

	cp = dest;
	while (*src != '\0')
	{
		*cp = *src;
		cp++;
		src++;
	}
	*cp = '\0';
}
/**
 * new_dog -function create new dog
 * @name: new dogs name
 * @age: new dog age
 * @owner: new dog owner
 *
 * Description: create new dog
 *
 * Return: pointer to new dog object
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	(*dog).name = malloc(sizeof(name));
	(*dog).owner = malloc(sizeof(owner));

	if ((*dog).name == NULL || (*dog).owner == NULL)
	{
		free(dog);
		return (NULL);
	}
	str_cpy(name, (*dog).name);
	(*dog).age = age;
	str_cpy(owner, (*dog).owner);

	return (dog);
}
