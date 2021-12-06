#include <stdio.h>

int main()
{
  char a[20], b[20];
  scanf("%s", a);
  scanf("%s", b);
  int sum[20] = {0};
  for(int i = 19; i >= 0; i--)
  {
    sum[i] = sum[i] + a[i]-'0' + b[i]-'0';
    if(sum[i]/10)
    {
      sum[i-1] = 1;
      sum[i] %= 10;
    }
  }
  for(int i = 0; i < 20; i++)
    printf("%d", sum[i]);
  return 0;
}
