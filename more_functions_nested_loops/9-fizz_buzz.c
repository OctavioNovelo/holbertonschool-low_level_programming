#include <stdio.h>
/**
 *
 *main - the body of the code
 *
 *Return: Always 0
 */
int main()
{
int i = 1;
while (i <= 100)
{
if ((i % 3 == 0) && (i % 5 == 0))
{
printf("FizzBuzz");
printf(" ");
}
else if (i % 3 == 0)
{
printf("Fizz");
printf(" ");
}
else if (i % 5 == 0)
{
printf("Buzz");
printf(" ");
}
else
{
printf("%d", i);
printf(" ");
}
i++;
}
return (0);
}
