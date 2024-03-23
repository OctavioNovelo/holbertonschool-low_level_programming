#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - Prints anything
 * @format: A list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
va_list args;
va_start(args, format);
char *separator = "";
unsigned int i = 0;
while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", separator, va_arg(args, int));
break;
case 'i':
printf("%s%d", separator, va_arg(args, int));
break;
case 'f':
printf("%s%f", separator, va_arg(args, double));
break;
case 's':
{
char *str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s%s", separator, str);
break;
}
default:
++i;
continue;
}
separator = ", ";
++i;
}
printf("\n");
va_end(args);
}
