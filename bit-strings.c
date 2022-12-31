#include <stdio.h>

#define MODULO (1000000000 + 7)

int main(void)
{
  unsigned long long n, r = 1;

  scanf("%llu", &n);

  while (n-- > 0)
    r = (2 * r) % MODULO;

  printf("%llu\n", r);
}