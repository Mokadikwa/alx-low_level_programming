#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - Write a function that creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: results
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *t;

	t = malloc(sizeof(dog_t));

	if (t != NULL)
	{
		t->name = malloc(strlen(name) + 1);
		if (name != NULL)
		{
			strcpy(t->name, name);
		}
		else
		{
			free(t);
			return (NULL);
		}
		t->owner = malloc(strlen(owner) + 1);
		if (owner != NULL)
		{
			strcpy(t->owner, owner);
		}
		else
		{
			free(t->name);
			free(t);
			return (NULL);
		}
		t->age = age;
	}
	return (t);
}
