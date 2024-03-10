#include <stdio.h>
/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 if successful, 1 if there's an error
 */
int main(int argc, char *argv[])
{
int num1;
int num2;
int result;
if (argc != 3)
{
printf("Error\n");
return (1);
}
if (sscanf(argv[1], "%d", &num1) != 1 || sscanf(argv[2], "%d", &num2) != 1)
{
printf("Error\n");
return (1);
}
result = num1 * num2;
printf("%d\n", result);
return (0);
}
