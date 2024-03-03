#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for 101-crackme.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s password\n", argv[0]);
        return 1;  // Return an error code
    }

    int i, length, j;
    char password[12];
    srand(time(NULL));

    for (i = 0; i < 10; i++)
    {
        length = rand() % 7 + 6;

        for (j = 0; j < length; j++)
        {
            password[j] = rand() % 94 + 33;
        }

        password[length] = '\0';
        printf("%s\n", password);
    }

    printf("Tada! Congrats\n");
    return 0;
}
