#include "main.h"
#include <stddef.h>
/**
 * _strchr - Locates a characterr in a string
 *@s: The string to search.
 *@c: The character to find.
 *
 *Return: A pointer to the first occurrence of the character c in the string
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
if (*s == c)
return (s);
return (NULL);
}
