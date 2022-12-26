#include <stdio.h>

/* Get number of positions which are beaten on k*k file by knight */
long long countBeatenPositions(int k)
{
  switch (k)
  {
  case 1:
  case 2:
    return 0;
  case 3:
    return 10 - 2;
  default:
    return 18 + 8 * (k - 4) - 2;
  }
}

int main(void)
{
  long long n, i, t, count = 0;

  /* Get maximum field size: k = 1,2,..,n */
  scanf("%lld", &n);

  for (i = 1, t = 1; i <= n; t += 4 * i + 1, ++i)
  {
    count += (2 * i - 1) * i * i - countBeatenPositions(i) - t;
    printf("%lld\n", count);
  }
}