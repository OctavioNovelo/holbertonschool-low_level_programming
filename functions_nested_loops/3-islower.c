#include "main.h"
/**
 *
 * int _islower(int c) - Check if the char is lowercase
 *
 * Return - Always 0 (Sucess)
 *
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
_putchar('1');
}
if (c >= 'A' && c <= 'Z')
{
_putchar('0');
}
_putchar('\n');
}
