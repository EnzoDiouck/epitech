#include "init_grid.h"


static void fill_border(char **grid, int size_grid)
{
  int i;

  i = 1;
  size_grid--;
  grid[0][0] = '+';
  while (i < size_grid)
    {
      grid[0][i] = '-';
      i++;
    }
  grid[0][size_grid] = '+';
  i = 1;
  grid[size_grid][0] = '+';
  while (i < size_grid)
    {
      grid[size_grid][i] = '-';
      i++;
    }
  grid[size_grid][size_grid] = '+';
  i = 1;
  while (i < size_grid)
    {
      grid[i][0] = '|';
      i++;
    }
  i = 1;
  while (i < size_grid)
    {
      grid[i][size_grid] = '|';
      i++;
    }
}

char **init_grid(int size_grid)
{
  char **grid;
  int i;

  i = 0;
  grid = malloc(sizeof(char *) * size_grid);
  if (grid == NULL)
    {
      write(2, "error malloc grid\n",19);
      exit(84);
    }
  while (i < size_grid)
    { 
      grid[i] = malloc(sizeof(char) * size_grid + 1);
      grid[i] = memset(grid[i], 32, size_grid);
      grid[i][size_grid] = 0;
      if (grid[i] == NULL)
        {
          write(2, "error malloc grid[i]\n",21);
          exit(84);
        }
      i++;
    }
  fill_border(grid, size_grid);
  return grid;
}
