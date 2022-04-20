#include "game.h"
#include "init_grid.h"
#include "print_grid.h"
#include "free_grid.h"

int main(int argc, char *argv[])
{
  char **grid;
  int size_grid;
  char p1;
  char p2;

  if (argc < 4)
    {
      write (2, "./tictactoe [-p1 CHAR1] [-p1 CHAR2] [-s GRID_SIZE]\n",52);
      return (84);
    }
  if (argv[1][0] == argv[2][0])
    {
      p1 = 'X';
      p2 = 'O';
    }
  else
    {
      p1 = argv[1][0];
      p2 = argv[2][0];
    }
  size_grid = atoi(argv[3]) + 2;
  grid = init_grid(size_grid);
  print_grid(grid, size_grid);
  game(grid, p1, p2, size_grid);
  free_grid(grid,size_grid);
}
