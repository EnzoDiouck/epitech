#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
  int nbr;
  
  if (argc < 3)
    {
      printf("do ./fizzbuzz nbr1 nbr2");
      return (84);
    }
  if (atoi(argv[1]) > atoi(argv[2]))
    {
      write(2,"Error: the second parametre must be greater than the first one.\n",65);
      return (84);
    }
  nbr = atoi(argv[1]);
  while (nbr <= atoi(argv[2]))
    {
      if (nbr % 3 == 0 && nbr % 5 == 0)
	printf("FizzBuzz\n");
      else if (nbr % 5 == 0)
	printf("Buzz\n");
      else if (nbr % 3 == 0)
	printf("Fizz\n");
      else
	printf("%d\n",nbr);
      nbr++;
    }
}
