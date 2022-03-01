#include <stdio.h>
#include <string.h>
#include <ctype.h>

char s[1000005];
int main()
{
  int sum = 0;
  while(fgets(s, sizeof(s), stdin))
  {
    int isAph = 0;
    int len = strlen(s);
    for(int i = 0; i < len; i++)
    {
      if(isalpha(s[i]))
      {
        if(!isAph) sum++;
        isAph = 1;
      }
      else isAph = 0;
    }
  }
  printf("%d", sum);
  return 0;
}
