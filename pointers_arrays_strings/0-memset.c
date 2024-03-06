#include "main.h"
/**
 *
 *@s: memory area pointed
 *@b: contant byte
 *@n: number of bytes
 *
 *_memset - fills memory with a constant byte.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
