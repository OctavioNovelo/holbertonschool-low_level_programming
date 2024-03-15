#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Frees a 2D grid previously created by alloc_grid function.
 * @grid: Pointer to the 2D array of integers to be freed.
 * @height: The height of the grid.
 */
void free_grid(int **grid, int height)
{
if (grid == NULL || height <= 0)
return;
for (int i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
