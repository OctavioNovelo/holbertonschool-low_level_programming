#include "main.h"
/**
 * rev_string - print a string in reverse
 *@s: pointer
 */
void rev_string(char *s)
{
int length = 0;
int i;
while (s[length] != 0)
{
length++;
}
for (i = length - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
