#include "main.h"
/**
 *puts_recursion - print a string
 *
 *@s: the actual character
 *
 */
void _puts_recursion(char *s)
{
while (*s != '\n')
{
_putchar('s');
s++;
}
_putchar('\n');
}
