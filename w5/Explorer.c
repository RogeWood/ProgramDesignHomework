#include <stdio.h>

char input[500000000];
int main()
{
  scanf("%s", input);

  long long int x = 0, y = 0, i = 0;

  while(1)
  {
    if(input[i] == 'X' || input[i] == '\0') break;
    else if(input[i] == 'U') y++;
    else if(input[i] == 'D') y--;
    else if(input[i] == 'R') x++;
    else if(input[i] == 'L') x--;
    i++;
  }
  printf("%lld %lld", x, y);
  return 0;
}
