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
mpz_t num1, num2, result;
if (argc != 3)
print_error();
mpz_init_set_str(num1, argv[1], 10);
mpz_init_set_str(num2, argv[2], 10);
mpz_init(result);
mpz_mul(result, num1, num2);
gmp_printf("%Zd\n", result);
mpz_clears(num1, num2, result, NULL);
return (0);
}

