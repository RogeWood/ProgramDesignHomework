#include <stdio.h>

int main()
{
  int a[505][505], b[505][505];
  int n, m, r;
  scanf("%d %d %d", &n, &m, &r);
  for(int i=0; i<n; i++)
    for(int j=0; j<m; j++) scanf("%d", &a[i][j]);
  for(int i=0; i<m; i++)
    for(int j=0; j<r; j++) scanf("%d", &b[i][j]);


  for(int i=0; i<n; i++)
  {
    for(int j=0; j<r; j++)
    {
      int sum = 0;
      for(int k=0; k<m; k++)
      {
        sum += a[i][k] * b[k][j];
      }
      printf("%d ", sum);
    }
    printf("\n");
  }

  return 0;
}
