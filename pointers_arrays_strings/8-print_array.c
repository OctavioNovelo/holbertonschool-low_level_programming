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
int array[n];
while (n >= 0)
{
printf("%d, ", *a);
n--;
*a = array[n];
}
}
