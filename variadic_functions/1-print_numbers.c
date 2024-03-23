#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - Prints numbers followed by a new line
 * @separator: String to be printed between numbers
 * @n: Number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
va_start(args, n);
unsigned int i;
for (i = 0; i < n; ++i)
{
printf("%d", va_arg(args, int));
if (separator != NULL && i != n - 1)
printf("%s", separator);
}
printf("\n");
va_end(args);
}
