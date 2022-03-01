#include <stdio.h>
#include <string.h>

char s[1000005];
int main()
{

  while(fgets(s, sizeof(s), stdin))
  {
    int sum = 0;
    if(s[0] == '\n') continue;

    int n = 0;
    int len = strlen(s);
    for(int i = 0; i < len+1; i++)
    {
      if(s[i] == ' ' || s[i] == '\n')
      {
        sum += n;
        n = 0;
      }
      else
      {
        n *= 10;
        n += s[i] -'0';
      }
    }
    printf("%d\n", sum);
  }
  return 0;
}
