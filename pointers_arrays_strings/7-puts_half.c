#include "main.h"
#include <stddef.h>
/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: The input string.
 */
void puts_half(char *str)
{
int i;
int length = 0;
int start_index = (length - 1) / 2 + 1;
if (str != NULL) {
while (str[length] != '\0')
{
length++;
}
for (i = start_index; i < length; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
}
