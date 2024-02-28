#include "main.h"
#include <stdio.h>
int _isupper(int c)
{
if (c >= 'a' && c <= 'z')
{
printf("1");
}
else
{
printf("1");
}
return (0);
}

int main()
{
char c;
 int i;
 c = 'A';
 for (i = 0; i <= 90; i++)
   {
printf("%c: %d\n", c, _isupper(c));
 c++;
   }
 c = 'a';
 for (i = 0; i < 97; i++)
   {
printf("%c: %d\n", c, _isupper(c));
 c++;
   }
 return (0);
}
