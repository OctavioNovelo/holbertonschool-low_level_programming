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
while (src[i] != NULL)
{
dest[i] = src[i];
i++;
}
if (dest[i] = NULL)
{
return (dest);
}
}
