#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
    /**
     * Print the number of arguments (excluding the program name)
     * followed by a new line
     */
    printf("%d\n", argc - 1);

    return 0;
}
