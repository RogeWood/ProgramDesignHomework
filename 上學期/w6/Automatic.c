#include <stdio.h>
#define pi 3.14159265
int main()
{
  int x;
  scanf("%d", &x);
  if(x == 1)
  {
    long long int l,w,h;
    scanf("%lld %lld %lld", &l, &w, &h);
    printf("%lld\n", l*w*h);
  }
  else if(x == 2)
  {
    long long int l,w,h;
    scanf("%lld %lld %lld", &l, &w, &h);
    printf("%lld\n", 2*(l*h+h*w+l*w));
  }
  else if(x == 3)
  {
    int r, h;
    scanf("%d %d", &r, &h);
    printf("%.8lf\n", pi*r*r*h);
  }
  else if(x == 4)
  {
    int r, h;
    scanf("%d %d", &r, &h);
    printf("%.8lf\n", pi*r*2*h + pi*r*r*2);
  }
  else if(x == 5)
  {
    int r;
    scanf("%d", &r);
    printf("%.8lf\n", pi*r*r*r*4/3);
  }
  else if(x == 6)
  {
    int r;
    scanf("%d", &r);
    printf("%.8lf\n", pi*4*r*r);
  }
  return 0;
}
