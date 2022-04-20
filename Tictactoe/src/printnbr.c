#include "printnbr.h"

void printnbr(int nbr)
{
  char c;
  if (nbr > 9)
    {
      printnbr(nbr / 10);
      printnbr(nbr % 10);
    }
  else
    {
      c = nbr + '0';
      write(1, &c, 1);
    }
}
