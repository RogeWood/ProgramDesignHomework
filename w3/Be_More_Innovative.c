#include <stdio.h>

int main()
{
  double a, b;
  int mode;
  scanf("%lf %lf %d", &a, &b, &mode);

  if(mode == 0)
  {
    printf("%d", (int)(a + b + 0.5));
  }
  else if(mode == 1)
  {
    int sum = (a + b) * 10 + 0.5;

    printf("%.1f", (float)sum/10);
  }
  else if(mode == 2)
  {
    int sum = (a + b) * 100 + 0.5;

    printf("%.2f", (float)sum/100);
  }
  else if(mode == 3)
  {
    int sum = (a + b) * 1000 + 0.5;

    printf("%.3f", (float)sum/1000);
  }
  else if (mode == 4)
  {
    int sum = (a + b) * 10000 + 0.5;

    printf("%.4f", (float)sum/10000);
  }
  else// mode == 5
  {
    int sum = (a + b) * 100000 + 0.5;

    printf("%.5f", (float)sum/100000);
  }
  return 0;
}
