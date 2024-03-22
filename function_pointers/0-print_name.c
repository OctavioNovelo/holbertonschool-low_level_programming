#include "function_pointers.h"
/**
 *print_name - prints a name.
 *@name: The name that going to print
 *@f: A pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
