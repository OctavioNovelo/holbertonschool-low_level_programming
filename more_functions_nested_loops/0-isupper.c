#include "main.h"
#include <stdio.h>
int _isupper(int c)
{
char a;
int i;
int up = 1;
int low = 0;
a = 'A';
for (i = 0; i <= 90; i++)
{
printf("%c: %d\n", c, up);
a++;
}
a = 'a';
for (i = 0; i < 97; i++)
{
printf("%c: %d\n", c, low);
a++;
}
return (0);
}
