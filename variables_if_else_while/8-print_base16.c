#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int number;
int dieciseis = 16;
for (number = 0; number < dieciseis; number++)
{
if (number < 10)
{
putchar(number + '0');
}
else
{
putchar(number - 10 + 'a');
}
}
putchar('\n');
return (0);
}
