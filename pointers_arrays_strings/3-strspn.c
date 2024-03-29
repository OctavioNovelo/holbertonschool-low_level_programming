#include "main.h"
/**
 *_strspn - Gets the length of a prefix substring.
 *@s: The string to search.
 *@accept: The substring containing accepted characters.
 *
 *Return: The number of bytes in the initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int match;
while (*s != '\0')
{
match = 0;
while (*accept != '\0')
{
if (*s == *accept)
{
count++;
match = 1;
break;
}
accept++;
}
if (match == 0)
break;
s++;
accept = accept - count;
if (*accept == '\0')
break;
count = 0;
}
return (count);
}
