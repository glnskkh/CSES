#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  long long n, k, start, l, i;

  scanf("%lld", &n);

  /* Otherwise there is too few odds */
  if (((n - 1) / 2) % 2 == 0)
  {
    puts("NO");
    return EXIT_SUCCESS;
  }

  puts("YES");

  l = n * (n + 1) / 4;

  k = i = 0;
  while (k < l)
    k += n + 1 - (++i);

  k = i * (i + 1) / 2;
  while (k % i != l % i)
    k += ++i;

  k = abs(l - k) / i + 1;

  printf("%lld\n", i);

  for (l = k; l < k + i; ++l)
    printf("%lld ", l);

  printf("\n%lld\n", n - i);

  for (l = 1; l <= n; ++l)
  {
    if (l == k)
    {
      l += i - 1;
      continue;
    }

    printf("%lld ", l);
  }

  printf("\n");

  return EXIT_SUCCESS;
}
