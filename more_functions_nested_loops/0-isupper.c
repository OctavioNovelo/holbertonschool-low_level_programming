#include "main.h"
#include <stdio.h>
int _isupper(int c)
{
printf(%d
if (c >= 'a' && c <= 'z')
{
printf("1");
}
else
{
printf("1");
}
}

int main()
{
char c;
c = 'A';
 for (int i = 0; i <= 90; i++)
   {
printf("%c: %d\n", c, _isupper(c));
 c++;
   }
 c = 'a';
 for (int i = 0; i < 97; i++)
   {
printf("%c: %d\n", c, _isupper(c));
 c++;
   }
 return (0);
}
