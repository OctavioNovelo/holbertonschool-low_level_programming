#include "main.h"
0;10;1c/**
 *_puts - print a string
 *@str: pointer
 */
void _puts(char *str)
{
while (*str != 0)
{
_putchar(*str);
str++;
}
}
