#include <stdio.h>
#include <math.h>

int main()
{
  int n, t;
  long long int sum = 0;
  int arr[15];
  scanf("%d%d", &n, &t);
  for(int i = 0; i < n+1; i++)
    scanf("%d", &arr[i]);
  for(int i = 1; i < n+1; i++)
  {
    printf("%d ", arr[i] * i);
    sum += pow(t,i-1) * arr[i] * i;
  }
  printf("\n%lld\n", sum);
  return 0;
}
