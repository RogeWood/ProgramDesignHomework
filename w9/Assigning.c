#include <stdio.h>
#include <stdlib.h>

int arr[505];

int compare(const void *a,const void *b)
{
     return *(int*)a-*(int*)b;
}

int main()
{
  int n,q;
  scanf("%d %d", &n, &q);
  for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
  qsort(arr, n, sizeof(int), compare);
  while(q--)
  {
    int index;
    scanf("%d", &index);
    printf("%d\n", arr[index-1]);
  }
  return 0;
}
