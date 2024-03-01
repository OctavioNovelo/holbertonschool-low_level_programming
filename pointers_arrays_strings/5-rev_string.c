#include "main.h"
/**
 * rev_string - print a string in reverse
 *@s: pointer
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
int length = 0;
int i;
while (s[length] != 0)
int start, end;
char temp;
while (s[length] != '\0')
{
length++;
}
for (i = length - 1; i >= 0; i--)
start = 0;
end = length - 1;
while (start < end)
{
_putchar(s[i]);
temp = s[start];
s[start] = s[end];
s[end] = temp;
start++;
end--;
}
_putchar('\n');
}
