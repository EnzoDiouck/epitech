#include "free_grid.h"

void free_grid(char **grid, int size_grid)
{
  int i;

  i = 0;
  while(i < size_grid)
    {
      free(grid[i]);
      i++;
    }
  free(grid);
}
