#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int number;
int ten = 10;
int nine = 9;
for (number = 0; number < ten; number++)
{
putchar(number + '0');
if (number != nine)
{
putchar(',');
}
}
putchar('\n');
return (0);
}
