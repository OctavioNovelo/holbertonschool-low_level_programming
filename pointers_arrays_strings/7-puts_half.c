#include "main.h"
#include <stddef.h>
/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: The input string.
 */
void puts_half(char *str)
{
if (str != NULL) {
int length = 0;
while (str[length] != '\0')
{
length++;
}
int start_index = (length - 1) / 2 + 1;
for (int i = start_index; i < length; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
}
