#include "main.h"
#include <stdio.h>
int _isupper(int c)
{
char a;
int i;
int up = 1;
int low = 0;
a = 65;
for (i = 0; i <= 90; i++)
{
printf("%c: %d\n", c, up);
a++;
}
a = 97;
for (i = 0; i < 97; i++)
{
printf("%c: %d\n", c, low);
a++;
}
return (0);
}
