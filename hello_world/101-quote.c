#include <unistd.h>
/**
 * main - the body of the code
 *
 * Return: Always 1 (error code)
 */
int main(void)
{
char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, message, 59);
return (1);
}
