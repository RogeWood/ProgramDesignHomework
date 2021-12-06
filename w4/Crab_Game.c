#include <stdio.h>

int main()
{
  int a, b, count = 0;
  scanf("%d %d", &a, &b);
  while(a && b)
  {
    if(a%2 && b%2) count++;
    a /= 2;
    b /= 2;
  }
  printf("%d", count);
  return 0;
}
