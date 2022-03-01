#include <stdio.h>

int arr[1000005];
int main()
{
  int n, x;
  scanf("%d %d", &n, &x);
  for(int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  long long int sum = 0;

  for(int i = n-1; i > 0; i--)
  {
    int left = 0, right = i, index = (left+right)/2;
    while(left != right)
    {
      if(index == 0)
      {
        if(arr[i] + arr[index] >= x) sum += i;
        break;
      }
      if(arr[i] + arr[index] >= x && arr[i] + arr[index-1] < x)
      {
         sum += i-index;
         break;
      }
      else if(arr[i] + arr[index] < x) left = index+1;
      else right = index;
      index = (left+right)/2;
    }
  }
  printf("%lld", sum);
  return 0;
}
