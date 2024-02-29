#ifndef MAIN_H
#define MAIN_H

int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);

int _putchar(char c)
{
    return (write(1, &c, 1));
}
#endif /* MAIN_H */
