
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
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i + 1] = '\0';
if (dest[i] == '\0')
{
return (dest);
}
return (dest);
}
