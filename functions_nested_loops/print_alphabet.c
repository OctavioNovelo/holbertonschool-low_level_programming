#include <stdio.h>
#include "main.h"
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
char letra;

for (letra = 'a'; letra <= 'z'; letra++)
{
putchar(letra);
}
putchar('\n');
return (0);
}
