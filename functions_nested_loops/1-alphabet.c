#include "main.h"
/**
 * main - Entry point of the program
 *
 * void print_alphabet(void) - print the alphabet in lowercase
 *
 * Return - always 0 (succes)
 */
void print_alphabet(void)
{
char letter = 'a';

while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
