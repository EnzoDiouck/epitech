#include "verif_win.h"

int verif_line(char **grid, char player, int size_grid)
{
  int score;
  int x;
  int y;

  score = 0;
  y = 1;
  while (y < size_grid)
    {
      x = 1;
      while(x < size_grid)
        {
          if (grid[x][y] == player)
            score++;
          if (score == (size_grid - 2))
            return 1;
          x++;
        }
      score = 0;
      y++;
    }
  x = 1;
  while (x < size_grid)
    {
      y = 1;
      while(y < size_grid)
        {
          if (grid[x][y] == player)
            score++;
          if (score == (size_grid - 2))
            return 1;
          y++;
        }
      score = 0;
      x++;
    }
  return 0;
}

int verif_diagonal(char **grid, char player, int size_grid)
{
  int x;
  int y;
  int score;

  score = 0;
  y = 1;
  x = 1;
  while (y < size_grid)
    {
      if (grid[x][y] == player)
        score++;
      if (score == (size_grid - 2))
        return 1;
      y++;
      x++;
    }
  score = 0;
  y = 1;
  x = size_grid - 2;
  while (y < size_grid)
    {
      if (grid[x][y] == player)
        score++;
      if (score == (size_grid - 2))
        return 1;
      y++;
      x--;
    }
  return 0;
}
