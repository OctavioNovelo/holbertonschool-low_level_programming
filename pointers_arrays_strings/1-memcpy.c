#include "main.h"
/**
 * _memcpy - Copies n bytes from memory area src to memory area dest.
 *
 *@dest: memory area
 *@src: memory area
 *@n: number of time
 *
 * Return: A pointer to the destination memory area (dest).
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
