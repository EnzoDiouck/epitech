#include "game.h"

static int verif_win(char **grid, char player, int size_grid)
{
  if (verif_line(grid, player,size_grid) != 0)
    return 1;
  if (verif_diagonal(grid, player,size_grid) != 0)
    return 1;
  return 0;
}

static int verif_grid(char **grid, int x, int y, int size_grid)
{
  if (x > size_grid - 1 || x < 1 || y > size_grid - 1 || y < 1)
    {
      printf("Case not valid ! Try again\n");
      return (84);
    }
  if (grid[x][y] != ' ')
    {
      printf("Case not valid ! Try again\n");
      return (84);
    }
  return 0;
}

void game(char **grid, char p1, char p2, int size_grid)
{
  int i;
  int x;
  int y;
  int winner;
  char player;
  char pos[4];

  i = 1;
  winner = 1;
  player = p1;
  while (i)
    {
      write(1, "Player ", 7);
      printnbr(winner);
      write(1, ">", 1);
      read(1, pos, 4);
      pos[4] = 0;
      y = atoi(&pos[0]);
      x = atoi(&pos[2]);
      x++;
      y++;
      if (verif_grid(grid,x , y, size_grid) == 0)
	{
	  grid[x][y] = player;
	  print_grid(grid, size_grid);
	  if (verif_win(grid, player, size_grid) != 0)
	    {
	      i = 0;
	      printf("Player %d won !",winner);
	    }
	  if (winner == 1)
	    {
	      player = p2;
	      winner = 2;
	    }
	  else
	    {
	      player = p1;
	      winner = 1;
	    }
	}
    }
}
