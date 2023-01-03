#include <stdio.h>

#define BASE 'A'
#define MAX_LEN 26

unsigned long long count[MAX_LEN] = {0};

int main(void)
{
  int c, evenCount, evenIndex, i;
  unsigned long long j;

  while ((c = getchar()) != EOF && c != '\n')
    ++count[c - BASE];

  evenCount = 0, evenIndex = -1;

  for (i = 0; i < MAX_LEN && evenCount < 2; i++)
  {
    if (count[i] & 1)
    {
      evenCount++;
      evenIndex = i;
    }
  }

  if (evenCount > 1)
  {
    puts("NO SOLUTION");
    return 0;
  }

  for (i = 0; i < MAX_LEN; i++)
  {
    if (i == evenIndex)
      continue;

    j = count[i] >> 1;
    count[i] = j;

    while (j-- > 0)
      putchar(i + BASE);
  }

  while (evenCount != 0 && count[evenIndex]-- > 0)
    putchar(evenIndex + BASE);

  for (i = MAX_LEN - 1; i >= 0; --i)
  {
    if (i == evenIndex)
      continue;

    j = count[i];

    while (j-- > 0)
      putchar(i + BASE);
  }
}