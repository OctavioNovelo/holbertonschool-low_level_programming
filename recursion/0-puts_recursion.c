#include "main.h"
/**
 *puts_recursion - print a string
 *
 *@s: the actual character
 *
 */
void _puts_recursion(char *s)
{
if (*s == '\n')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursions(s + 1);
}
