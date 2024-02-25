#include "main.h"
/**
 * print_alphabet_x10 - Print the alphabet in lowercase
 *
 * Return - always 0 (succes)
 */
void print_alphabet_x10(void)
{
char letter = 'a';
int i;
for (i = 0; i < 10; i++)
{
while (letter < 'z')
{
_putchar(letter);
}
_putchar('\n');
}
}
