#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  for(int i = n; i > 0; i--)
  {
    int s = i;
    while(s--)
      printf("*");
    printf("\n");
  }
  return 0;
}
