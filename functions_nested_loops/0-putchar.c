#include "main.h"

int main(void)
{
  char c[] = "_putchar";

  size_t a;
  
  for(a = 0; a < sizeof(c); a++)
    {
  _putchar(c[a]);
    }
  _putchar('\n');
  return (0);
}
