#include "main.h"
#include <stdio.h>
int _isupper(int c)
{
int i;
int up = 1;
int low = 0;
c = 'A';
for (i = 65; i <= 90; i++)
{
printf("%c: %d\n", c, up);
c++;
}
c = 'a';
for (i = 97; i < 122; i++)
{
printf("%c: %d\n", c, low);
c++;
}
return (0);
}
