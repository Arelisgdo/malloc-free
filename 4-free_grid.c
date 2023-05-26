#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional grid previously created by alloc_grid.
 * @grid: Pointer to the grid to free.
 * @height: Height of the grid.
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
    int i;

    if (grid == NULL)
        return;

    // Free each row
    for (i = 0; i < height; i++)
    {
        free(grid[i]);
    }

    // Free the grid itself
    free(grid);
}
