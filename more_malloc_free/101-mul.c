#include <stdio.h>
#include <stdlib.h>
/**
 * print_error - Prints error message and exits with status 98
 */
void print_error(void)
{
printf("Error\n");
exit(98);
}
/**
 * is_digit - Checks if a string contains only digits
 * @s: The string to check
 * Return: 1 if string contains only digits, 0 otherwise
 */
int is_digit(char *s)
{
while (*s)
{
if (*s < '0' || *s > '9')
return (0);
s++;
}
return (1);
}
/**
 * main - Entry point of the program
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to the arguments
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
if (argc != 3)
print_error();
if (!is_digit(argv[1]) || !is_digit(argv[2]))
print_error();
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 * num2;
printf("%d\n", result);
return (0);
}

