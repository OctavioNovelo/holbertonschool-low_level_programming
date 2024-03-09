#include "main.h"
/**
 *_print_rev_recursion - print a string in rev
 *
 *@s: the actual character
 *
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_puts_recursion(s + 1);
_putchar(*s);
}
else
{
_putchar('\n');
}
}
