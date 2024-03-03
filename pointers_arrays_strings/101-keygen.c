#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Generates random valid passwords for 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
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
printf("Tada! Congrats");
return (0);
}
