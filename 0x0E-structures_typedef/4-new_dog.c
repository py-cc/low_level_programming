#include "dog.h"
#include <stdlib.h>
/**
* _strdup - duplicate of the string str
* @str: pointer to a string
*
* Return: NULL if str is NULL and NULL if insufficient memory was available
* On success, return a pointer to the duplicated string.
*
*/
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, j;

	if (str == NULL)
	{
		return (NULL);
	}


	for (i = 0; str[i] != '\0'; i++)
	{
	}

	ptr = malloc(i * sizeof(char) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		ptr[j] = str[j];
	}

	return (ptr);
}
/**
* new_dog - function that creates a new dog
* @name: pointer to string
* @age: number
* @owner: pointer to string
*
* Return: new space in memory or NULL if fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = _strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = _strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;

	return (new_dog);

}
