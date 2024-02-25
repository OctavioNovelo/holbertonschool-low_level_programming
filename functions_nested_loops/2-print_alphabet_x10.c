#include "main.h"
/**
 * print_alphabet_x10 - Print the alphabet in lowercase
 *
 * Return - always 0 (succes)
 */
void print_alphabet_x10(void)
{
char letter = 'a';

 for (;letter < 'z' * 10; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
