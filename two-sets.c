#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n, m, i;

  scanf("%d", &n);

  if (((n + 1) / 2) % 2 == 0)
  {
    puts("NO\n");
    return EXIT_FAILURE;
  }

  puts("YES\n");

  /* Write a distribution system */

  m = ((n - 1) / 2) * 2 + 1;

  if (n == m)
  {
    for (i = 1; i <= n; i += 2)
      if (n
  }
}
