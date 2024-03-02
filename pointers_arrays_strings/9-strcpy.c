#include <stddef.h>
#include "main.h"
/**
 * *_strcpy - copy the string for src tod dest
 *
 *@dest: pointer 1
 *@src: pointer 2
 *
 *Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
int i;
if (dest == NULL || src == NULL)
{
return NULL;
}
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
