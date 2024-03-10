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
char *temp_accept;
while (*s != '\0')
{
match = 0;
*temp_accept = accept;
while (*accept != '\0')
{
if (*s == *accept)
{
count++;
match = 1;
break;
}
temp_accept++;
}
if (!match)
break;
s++;
}
return (count);
}
