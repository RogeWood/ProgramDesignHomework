#include <stdio.h>
#include <string.h>

int main()
{
  char k[100005] = {0}, rek[100005] = {0};
  scanf("%s", k);
  int klen = strlen(k);

  long long int t;

  int len = 0;
  int arr[100005] = {0};
  while(scanf("%lld", &t) != EOF)
  {
    int index = 0;
    int a[10005] = {0};
    while(t)
    {
      a[index] += t%16;
      t /= 16;
      a[index] += t%16 * 16;
      t /= 16;
      index++;
    }
    for(int i = len, j = index-1; i < len+index; i++, j--)
      arr[i] = a[j];
    len += index;
  }
  // for(int i = 0; i < len; i++)
  //   printf("%x ", arr[i]);
  for(int i = 0; i < len; i++)
    k[i] = k[i%klen];
  for(int i = 0 ; i < len; i++)
    rek[i] = k[len-1-i];

  // printf("%s\n%s", k,rek);
  for(int i = 0 ; i < len; i++)
    printf("%c", k[i]^arr[i]^rek[i]);

  return 0;
}
