#include <stdio.h>
#include <math.h>

int main()
{
  long long int a, alow, b, blow, S;
  while(scanf("%lld%lld%lld%lld%lld", &a, &alow, &b, &blow, &S) != EOF)
  {
    int t = sqrt(S*2/(a+b+(a/alow)*a+(b/blow)*b));
    //printf("est %d\n", t);
    long long int Smax = t * t *(a+b+(a/alow)*a+(b/blow)*b) / 2;
    while(t * t *(a+b+(a/alow)*a+(b/blow)*b) <= 2 * S)
    {
      Smax = t * t *(a+b+(a/alow)*a+(b/blow)*b) / 2;
      t++;
    }
    t--;
    //printf("Smax %lld\n", Smax);
    printf("%d %lld\n", t, S - Smax);
  }

  return 0;
}
//
// 1,
// a = 4 = t * t * a / 2
// b = 6 = t * t * b / 2
// 2,
// a = 8 = (a/alow * t) ^2 * alow /2
// b = 18 = (b/blow * t) ^2 * blow /2
// Smin = S - Smax => Smax = t * t * a / 2 + t * t * b / 2 + (a/alow * t) *(a/alow * t)* alow /2
// Smax = t*t/2 * (a+b+a*a/alow+b*b/blow)
