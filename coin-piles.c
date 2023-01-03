#include <stdio.h>

int main(void)
{
  unsigned long long n, a, b;

  scanf("%llu", &n);

  while (n-- > 0)
  {
    scanf("%llu %llu", &a, &b);

    if ((2 * a - b) % 3 == 0 && (2 * b - a) % 3 == 0)
      printf("YES\n");
    else
      printf("NO\n");
  }
}