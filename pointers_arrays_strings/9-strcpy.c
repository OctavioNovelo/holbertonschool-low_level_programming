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
for (i = 0;src[i] != '\0'; i++)
{
dest[i] = src[i];
}
if (dest[i] == '\0')
{
return (dest);
}
else
{
dest[i + 1] = '\0';
}
return (dest);
}
