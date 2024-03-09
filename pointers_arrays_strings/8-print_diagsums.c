#inlcude "main.h"
/**
 *print_diagsums - Make the sum of the two diagonals of a matrix
 *
 *@a: A pointer to integers representing the square matrix
 *@size: The size of rows or columns
 *
 */
void print_diagsums(int *a, int size) {
int i, sum1 = 0, sum2 = 0;
for (i = 0; i < size; i++) {
sum1 += *(a + i * size + i);
sum2 += *(a + i * size + (size - 1 - i));
}
printf("%d, %d\n", sum1, sum2);
}
