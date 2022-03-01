#include <stdio.h>
#include <math.h>

double distance(double x1, double y1, double x2, double y2);
int main()
{
  double arr[4];
  while(scanf("%lf", &arr[0]) != EOF)
  {
    for(int i=1; i < 4; i++)
      scanf("%lf", &arr[i]);

    printf("%.10lf\n", distance(arr[0], arr[1], arr[2], arr[3]));
  }
  return 0;
}

double distance(double x1, double y1, double x2, double y2)
{
  return sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
}
