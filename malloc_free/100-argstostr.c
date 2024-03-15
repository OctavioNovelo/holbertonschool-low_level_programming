#include "main.h"
#include <stdlib.h>
/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The argument count.
 * @av: Array of argument strings.
 *
 * Return: Pointer to the new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
int total_length = 0;
int i, j, k;
char *concatenated_str;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
total_length++;
total_length++;
}
total_length++;
concatenated_str = malloc(total_length * sizeof(char));
if (concatenated_str == NULL)
return (NULL);
k = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
concatenated_str[k++] = av[i][j];
}
concatenated_str[k++] = '\n';
}
concatenated_str[k] = '\0';
return (concatenated_str);
}
