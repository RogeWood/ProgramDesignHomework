#include <stdio.h>

long long int gcd(int m, int n) {
    while(n != 0) {
        int r = m % n;
        m = n;
        n = r;
    }
    return m;
}

int main()
{
  long long int a, b;
  scanf("%lld %lld", &a, &b);
  printf("%lld", a*b / gcd(a, b));
  return 0;
}
