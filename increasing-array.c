#include <stdio.h>

int main(void) {
  int n;

  scanf("%d", &n);

  long long last, current, diff = 0;

  scanf("%lld", &last);

  while(--n > 0) {
    scanf("%lld", &current);

    if (last > current)
      diff += last - current;
    else
      last = current;
  }

  printf("%lld", diff);
}
