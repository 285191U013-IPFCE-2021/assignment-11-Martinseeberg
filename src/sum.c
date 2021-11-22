#include "sum.h"

#include <stdio.h>
#include <assert.h>

/* Sum integers 1 to n */
int sum(int n)
{
  /* pre-condition */
  assert(n >= 1);
  /* post-condition */
  if (n > 1)
    return n + sum(n - 1);
  else
    return 1;
}

/* Sum integers 1 to n */
int sumtail(int n, int total)
{
  assert(n >= 1);
  if (n == 0)
    return total;
  else if (n == 1)
    return 1 + total;
  else
    return sumtail(n - 1, total + n);
}

/* Sum integers 1 to n */
int sumwhile(int n)
{
  if (n == 1)
  {
    return 1;
  }

  while (n != 0)
    return n + sum(n - 1);
}
