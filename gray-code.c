#include <stdio.h>

void print(char *str, int n, int l)
{
  if (l == n)
  {
    puts(str);
    return;
  }

  print(str, n, l + 1);

  if (str[l] == '1')
    str[l] = '0';
  else
    str[l] = '1';

  print(str, n, l + 1);
}

int main(void)
{
  int n;

  scanf("%d", &n);

  char str[n + 1];
  for (int i = 0; i < n; i++)
    str[i] = '0';
  str[n] = '\0';

  print(str, n, 0);
}
