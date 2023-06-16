#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  int x = n % 10;

  if (n > 5)
  {
    printf("the last deget in %d is %d and is greater than 5\n", n);
  }
  else if (n == 0)
  {
    printf("the last deget in %d is %d and is 0\n", n);
  }
  else
  {
    printf("the last deget in %d is %d and is less than 6 and not 0\n", n);
  }
  return (0);
}
