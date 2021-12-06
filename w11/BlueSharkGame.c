#include <stdio.h>

long long int count(long long int n)
{
  long long int sum = 0;
  while(n)
  {
    if(n%2) sum++;
    n /= 2;
  }
  return sum;
}
int main()
{
  long int x, y;
  scanf("%ld %ld", &x, &y);
  long long int a = x & y, b = x | y, c = x ^ y;
  printf("%lld %lld %lld", count(a), count(b), count(c));
  return 0;
}
/*
1.and
1 0 0 1 0
2.or
1 1 1 1 0
3.xor
0 1 1 0 0
*/
