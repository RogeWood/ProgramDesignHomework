#include <stdio.h>

int arr[10005] = {0};
int main()
{
  int A, b;
  scanf("%d%d", &A, &b);
  if(b == 10 || A == 0) printf("%d", A);
  else
  {
    for(int i = 0; A; i++)
    {
      arr[i] = A % b;
      A /= b;
    }

    int flag = 0;
    for(int i = 10004; i >= 0; i--)
    {
      if(arr[i] != 0) flag = 1;
      if(flag) printf("%d", arr[i]);
    }
  }

  return 0;
}
