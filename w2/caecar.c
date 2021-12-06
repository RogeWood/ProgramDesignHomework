#include <stdio.h>

int main()
{
  char s[11];
  scanf("%s", s);
  int move = s[10] - '0';
  int i = 0;
  for(i = 0; i < 10; i++)
    printf("%c", ((s[i]+move > 'Z') ? s[i]+move-'Z'-1+'A' : s[i]+move));
  return 0;
}
