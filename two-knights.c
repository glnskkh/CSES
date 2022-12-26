#include <stdio.h>

int main(void)
{
  long long n, i, t, count = -8;

  /* Get maximum field size: k = 1,2,..,n */
  scanf("%lld", &n);

  for (i = 1, t = 1; i <= n; t += 4 * i + 1, ++i)
  {
    count += (2 * i - 1) * i * i;
    count -= 8 * i - 16;
    count -= t;
    printf("%lld\n", count);
  }
}