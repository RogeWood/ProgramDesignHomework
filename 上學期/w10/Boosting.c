#include <stdio.h>
#include <string.h>

int compare(char *a, char *b)
{
  int alen = strlen(a), blen = strlen(b);
  for(int i = 0; i < alen; i++)
    if(a[i] != b[i]) return a[i] < b[i];
  return alen < blen;
}

int main()
{
  char s[505][105];
  int len = 0;
  while(scanf("%s", s[len]) != EOF)
    len++;
  for(int i = 0; i < len; i++)
  {
    for(int j = 0; j < len-1; j++)
    {
      if(!compare(s[j], s[j+1]))
      {
        char temp[105] = {0};
        strcpy(temp, s[j]);
        strcpy(s[j], s[j+1]);
        strcpy(s[j+1], temp);
      }
    }
  }
  for(int i = 0; i < len; i++)
    printf("%s\n", s[i]);
  return 0;
}
