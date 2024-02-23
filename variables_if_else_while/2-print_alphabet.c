#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
  char letra;

  for (letra = 'a'; letra <= 'z'; letra++)
    {
      putchar(letra);
      putchar('\n');
    }
  return (0);
}
