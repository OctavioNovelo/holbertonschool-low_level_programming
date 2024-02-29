#include "main.h"
#include <stdio.h>
int _isupper(int c)
{
char a;
int i;
int up = 1;
int low = 0;
c = 'A';
a = c;
for (i = 0; i <= 90; i++)
{
printf("%c: %d\n", a, up);
a++;
}
c = 'a';
a = c;
for (i = 0; i < 97; i++)
{
printf("%c: %d\n", a, low);
a++;
}
return (0);
}
