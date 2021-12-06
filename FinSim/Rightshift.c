#include <stdio.h>

int main()
{
  int arr[1005];
  int n, m;
  scanf("%d%d", &n, &m);
  for(int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  int a = n-(m%n);
  for(int i = a; i < n; i++)
    printf("%d ", arr[i]);
  for(int i = 0; i < a; i++)
    printf("%d ", arr[i]);

  return 0;
}
