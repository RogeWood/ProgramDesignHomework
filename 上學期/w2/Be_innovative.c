#include <stdio.h>

int main()
{
  float a, b;

  scanf("%f %f", &a, &b);
  printf("%d", (int)(a + b + 0.5));
  return 0;
}
