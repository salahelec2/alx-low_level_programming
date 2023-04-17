#include <stdlib.h>

/**
 * str_len - string lenth
 * @str: string
 *
 * Return: string len.
 */

int str_len(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * str_cpy - copy string content
 * @dest: destination string
 * @src: source string
 * Return: string destination.
 */

char *str_cpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - function to create new_dog structure
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: new_dog structure or null if fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len, owner_len;
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}
	name_len = str_len(name);
	new_dog->name = malloc(sizeof(char) * (name_len + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	str_cpy(new_dog->name, name);
	new_dog->age = age;
	owner_len = str_len(owner);
	new_dog->owner = malloc(sizeof(char) * (owner_len + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	str_cpy(new_dog->owner, owner);
	return (new_dog);
}
