#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  for(int i = 0; i < n; i++)
  {
    for(int j = n; j > i+1; j--)
      printf(" ");
    printf("*");
    for(int j = 0; j < 2*i; j++)
    {
      if(j == 2*i-1)printf("*");
      else printf(" ");
    }
    printf("\n");
  }
  int k = 2 * n - 3;
  for(int i = 0; i < n-1; i++)
  {
    for(int j = 0; j < i+1; j++)
      printf(" ");
    printf("*");

    for(int j = 0; j < k-2; j++)
      printf(" ");
    if(i != n-2) printf("*\n");
    k -= 2;
  }
  printf("\n");
  return 0;
}
//????????????????????????????
