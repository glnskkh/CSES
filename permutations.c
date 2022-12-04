#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n, i, h;

  scanf("%d", &n);

  if (n == 3 || n == 2) {
    printf("%s", "NO SOLUTION");
    return 0;
  }

  i = 1;
  h = n >> 1;

  while (n > 0) {
    printf("%d ", i + h);
    --n;

    if (n > 0) {
      printf("%d ", i);
      --n;
    }

    ++i;
  }
}
