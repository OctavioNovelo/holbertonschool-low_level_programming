#include "main.h"
/**
 *puts_recursion - print a string
 *
 *@s: the actual character
 *
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
s++;
else
}
_putchar('\n');
}
