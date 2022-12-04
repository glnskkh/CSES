#include <stdio.h>

int main(void) {
  long long n, x, y, m, d;

  scanf("%lld", &n);

  while (n-- > 0) {
    scanf("%lld %lld", &x, &y);

    if (x > y)
      m = x;
    else 
      m = y;

    if (m & 1)
      d = y - x;
    else
      d = x - y;

    printf("%lld\n", m * (m - 1) + d + 1);
  }
}
