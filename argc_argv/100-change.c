#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 if successful, 1 if there's an error
 */
int main(int argc, char *argv[])
{
int cents;
int coins[] = {25, 10, 5, 2, 1};
int num_coins;
if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
return (0);
}
num_coins = sizeof(coins) / sizeof(coins[0]);
int min_coins = 0;
int i;
for (i = 0; i < num_coins; i++)
{
while (cents >= coins[i])
{
cents -= coins[i];
min_coins++;
}
}
printf("%d\n", min_coins);
return (0);
}
