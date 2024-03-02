#include "main.h"
/**
 * puts2 - Prints every other character of a string.
 * @str: The input string.
 */
void puts2(char *str)
{
int length = 0;
int i;
while (str[length] != '\0')
{
length++;
}
for (i = 0; str[i] != '\0' && str[i + 1] != '\0'; i += 2)
{
_putchar(str[i]);
}
if (length > 20)
{
_putchar('.');
}
_putchar('\n');
}
