#include <stdio.h>

int gcd(int a, int b)
{
  int t = 1;
  while(t != 0)
  {
    t = a % b;
    a = b;
    b = t;
  }
  return a;
}
int main()
{
  int n, temp = 0;
  while(scanf("%d", &n) != EOF)
  {
    if(!temp) temp = n;
    temp = (n > temp) ? gcd(n, temp) : gcd(temp, n);
  }
  printf("%d", temp);
  return 0;
}
