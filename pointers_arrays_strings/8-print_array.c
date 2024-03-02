#include "main.h"
#include <stdio.h>
/**
 * print_array - print an a array
 *
 *@n: number of elements of the array to be printed
 *
 *@a: pointer
 */
void print_array(int *a, int n)
{
int i;
if (a != NULL && n > 0)
{
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
{
printf(", ");
}
}
}
printf('\n');
}
