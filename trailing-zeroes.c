#include <stdio.h>

int main(void)
{
  unsigned long long n, fives;

  scanf("%llu", &n);

  fives = 0;

  while (n > 0)
  {
    n /= 5;
    fives += n;
  }

  printf("%llu\n", fives);
}