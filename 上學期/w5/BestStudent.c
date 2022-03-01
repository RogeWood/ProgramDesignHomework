#include <stdio.h>

int main()
{
  long long int n, sum = 0;
  while(scanf("%lld", &n)!=EOF)
    sum += n;
  printf("%lld", sum);
  return 0;
}
