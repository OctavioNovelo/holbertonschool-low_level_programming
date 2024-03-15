#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 * Return: Pointer to the newly allocated duplicated string, or NULL
 */
char *_strdup(char *str)
{
char *dup;
unsigned int len = 0, i;
if (str == NULL)
return (NULL);
while (str[len])
len++;
dup = malloc((len + 1) * sizeof(char));
if (dup == NULL)
return (NULL);
for (i = 0; i <= len; i++)
dup[i] = str[i];
return (dup);
}
