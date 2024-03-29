#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * _strdup - Duplicates a string
 * @str: String to duplicate
 *
 * Return: Pointer to the newly allocated string, or NULL if failed
 */
char *_strdup(char *str)
{
char *dup;
int len, i;
if (str == NULL)
return (NULL);
len = 0;
while (str[len])
len++;
dup = malloc(sizeof(char) * (len + 1));
if (dup == NULL)
return (NULL);
for (i = 0; i <= len; i++)
dup[i] = str[i];
return (dup);
}
/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the newly created dog, or NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *name_copy, *owner_copy;
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);
name_copy = _strdup(name);
if (name_copy == NULL)
{
free(new_dog);
return (NULL);
}
owner_copy = _strdup(owner);
if (owner_copy == NULL)
{
free(name_copy);
free(new_dog);
return (NULL);
}
new_dog->name = name_copy;
new_dog->age = age;
new_dog->owner = owner_copy;
return (new_dog);
}
