#include <stdio.h>
#include <math.h>
int p[100005] = {0};
int prim[10005];
int main()
{
  p[0] = 1;
  p[1] = 1;
  int k = 0;
  for(int i = 2; i < 100005; i++)
  {
    if(p[i] == 0)
    {
      for(int j = i+i; j < 100005; j += i)
        p[j] = 1;
      prim[k] = i;
      k++;
    }
  }
  int n;
  scanf("%d", &n);
  while(n--)
  {
    int a, flag = 0;
    scanf("%d", &a);

    for(int i = 0 ;prim[i] <= sqrt(a);i++)
    {
      if(a%prim[i] == 0)
      {
        printf("False\n");
        flag = 1;
        break;
      }
    }
    if(!flag)
      printf("True\n");
  }

  return 0;
}
