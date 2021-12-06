#include <stdio.h>

int num[300005];
int count[300005] = {0};
int main()
{
  int n, x;
  scanf("%d %d", &n, &x);
  int last = -1, len = 0;
  for(int i = 0; i < n; i++)
  {
    int a;
    scanf("%d", &a);
    if(a == last) count[len-1]++;
    else
    {
      num[len] = a;
      count[len]++;
      len++;
    }
    last = a;
  }

  //for(int i = 0; i < len; i++) printf("%d %d\n", num[i], count[i]);

  long long int sum = 0;
  for(int i = 0; i < len; i++)
    if(num[i] != 1 && num[i]*2 >= x) sum += (count[i] * (count[i]-1)) / 2;

  for(int i = 0; i < len-1; i++)
    for(int j = i+1; j < len; j++)
      if(num[i]+num[j] >= x)
        sum += count[i] * count[j];

  printf("%lld", sum);
  return 0;
}
