#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be checked.
 * @accept: The characters to match.
 *
 * Return: The number of bytes in the initial segment of s
 *         consisting only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept) {
unsigned int count = 0;
int found;
char *original_accept;
while (*s)
{
*original_accept = accept; 
found = 0;
while (*accept)
{
if (*s == *accept)
{
found = 1;
break;
}
accept++;
}
if (!found)
{
break;
}
count++;
s++;
accept = original_accept;
}
return (count);
}
