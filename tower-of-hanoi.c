#include <stdio.h>

void hanoi(int n, int from, int to)
{
  if (n == 1)
  {
    printf("%d %d\n", from, to);
    return;
  }

  int other = 6 - (from + to);

  hanoi(n - 1, from, other);

  hanoi(1, from, to);

  hanoi(n - 1, other, to);
}

int main(void)
{
  int n;

  scanf("%d", &n);

  printf("%d\n", (1 << n) - 1);

  hanoi(n, 1, 3);
}