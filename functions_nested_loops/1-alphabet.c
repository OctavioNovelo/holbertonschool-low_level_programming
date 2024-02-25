#include "main.h"
/**
 * main - Entry point of the program
 *
 * print_alphabet - print the alphabet in lowercase
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
