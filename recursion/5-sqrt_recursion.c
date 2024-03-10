#include "main.h"
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 *
 * @n: The number to find the square root of.
 *
 * Return: The square root of n, or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (n);
}
else
{
return (find_sqrt(n, 2));
}
}
