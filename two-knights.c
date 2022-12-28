#include <stdio.h>

int main(void)
{
  unsigned long long n, i, count = -8;

  /* Get maximum field size: k = 1,2,..,n */
  scanf("%lld", &n);

  for (i = 1; i <= n; ++i)
  {
    count += (2 * i - 1) * (i - 1) * i - 8 * (i - 2);
    printf("%lld\n", count);
  }
}
