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
for (number = '0'; number <= ten; number++)
{
putchar(number);
}
putchar(ten);
putchar('\n');
return (0);
}
