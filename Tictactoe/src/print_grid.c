#include "print_grid.h"

void print_grid(char **grid, int size_grid)
{
  int i;

  i = 0;
  while (i < size_grid)
    {
      printf("%s\n",grid[i]);
      i++;
    }
}
