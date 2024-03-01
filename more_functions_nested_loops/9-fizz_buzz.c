#include <stdio.h>
/**
 *
 *main - the body of the code
 *
 *Return: Always 0
 */
int main()
{
int i;
for (i = 0; i <= 100; i++)
{
if ((i % 3) == 0 && (i % 5) == 0)
{
printf("FizzBuzz\n");
}
if ((i % 3) == 0)
{
printf("Fizz\n");
}
if ((i % 5) == 0)
{
printf("Buzz\n");
}
else
{
printf("%d\n", i);
}
}
return (0);
}
