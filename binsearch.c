#include <stdio.h>
#include <time.h>
#include <math.h>

int binsearch(int x, int v[], int n)
{
  int low, mid, high;

  low = 0;
  high = n - 1;
  while (low <= high)
  {
    mid = (low + high) / 2;
    if (x < v[mid])
    {
      high = mid - 1;
    }
    else if (x > v[mid])
    {
      low = mid + 1;
    }
    else
    {
      return mid;
    }
  }
  return -1;
}

int st(int x, int v[], int n)
{
  int low, mid, high;

  low = 0;
  high = n - 1;
  while (low != high)
  {
    mid = ceil((low + high) / 2.0);
    if (x < v[mid])
    {
      high = mid - 1;
    }
    else
    {
      low = mid;
    }
  }
  return x == v[mid] ? mid : -1;
}
int binsearchonecomp(int x, int v[], int n)
{
  int low, mid, high;

  low = 0;
  high = n;
  while (low < high)
  {
    mid = low + ((high - low) / 2);
    if (v[mid] < x)
      low = mid + 1;
    else
      high = mid;
  }
  return (v[low] == x) ? low : -1;
}
int main()
{
  int v[41] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40};

  clock_t t1;
  t1 = clock();
  for (int i = 0; i < 99999999; i++)
  {
    binsearch(3, v, 41);
  }
  t1 = clock() - t1;
  int time1 = (int)t1;

  clock_t t2;
  t2 = clock();
  for (int i = 0; i < 99999999; i++)
  {
    binsearchonecomp(3, v, 41);
  }
  int time2 = (int)t2;
  printf("First: %d. Second: %d", time1, time2);
}