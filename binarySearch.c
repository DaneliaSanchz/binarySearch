#include <stdio.h>

int binarySearch(int array[], int n, int x)
{
  int min, max, p;
  min = 0;
  max = n;
  while(max >= min)
  {
    p = (max + min) / 2;
    if(array[p] == x)
      return p;
    else if(array[p] < x)
      min = p + 1;
    else
      max = p - 1;
  }

  return -1;
}

int main()
{
  int pos;
  int vector[] = {11, 22, 36, 47, 51, 62, 79, 85, 93, 100};
  int n = sizeof(vector) / sizeof(vector[0]);
  pos = binarySearch(vector, n, 62);
  printf("%d\n", pos);

  return 0;
}
