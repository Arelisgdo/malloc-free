#include <stdlib.h>

/**
 * alloc_grid - Creates a 2-dimensional grid of integers.
 * @width: Width of the grid.
 * @height: Height of the grid.
 *
 * Return: Pointer to the created grid, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
    int **grid;
    int i, j;

    if (width <= 0 || height <= 0)
        return NULL;

    // Allocate memory for the rows
    grid = malloc(sizeof(int *) * height);
    if (grid == NULL)
        return NULL;

    // Allocate memory for each column in each row
    for (i = 0; i < height; i++)
    {
        grid[i] = malloc(sizeof(int) * width);
        if (grid[i] == NULL)
        {
            // If allocation fails, free previously allocated memory and return NULL
            for (j = 0; j < i; j++)
                free(grid[j]);
            free(grid);
            return NULL;
        }
    }

    // Initialize each element of the grid to 0
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            grid[i][j] = 0;
        }
    }

    return grid;
}