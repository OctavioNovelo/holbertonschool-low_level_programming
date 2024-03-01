#include "main.h"
/**
 * print_rev - print a string in reverse
 *@s: pointer
 */
void print_rev(char *s)
{
int length = 0;
while (s[length] != 0)
{
length++;
}
int i;
for (i = length - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
