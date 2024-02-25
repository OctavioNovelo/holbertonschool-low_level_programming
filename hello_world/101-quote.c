#include <unistd.h>
/**
 * main - the body of the code
 *
 */
int main(void)
{
char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
write(2, message, 59);
write('\n');
return (1);
}
