#include "main.h"
#include <stdio.h>
/**
 *print_chessboard - print the chessboard
 *
 *@a: a pointer
 */
void print_chessboard(char (*a)[8])
{
int j, i;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
printf("%c", a[i][j]);
}
printf("\n");
}
}
