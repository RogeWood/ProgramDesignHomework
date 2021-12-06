#include <stdio.h>
#include <string.h>
#include <ctype.h>

char s[105], word[1005][105];
int sum[1005] = {0};

int compare(char *a, char *b)
{
  int alen = strlen(a), blen = strlen(b);
  for(int i = 0; i < alen; i++)
    if(a[i] != b[i]) return a[i] < b[i];
  return alen < blen;
}

int main()
{
  int index = 0;
  while(scanf("%s", s) != EOF)
  {
    int len = strlen(s);
    for(int i = 0; i < len; i++)
      s[i] = tolower(s[i]);

    int appared = 0;
    for(int i = 0; i < index; i++)
    {
      if(!strcmp(s, word[i]))
      {
        appared = 1;
        sum[i]++;
        break;
      }
    }
    if(!appared)
    {
      sum[index]++;
      index++;

      char keep[105] = {0};
      int keepn = sum[index-1];
      strcpy(keep, s);
      for(int j = 0; j < index; j++)
      {
        if(!compare(word[j], keep))
        {
          char temp[105] = {0};
          strcpy(temp, word[j]);
          strcpy(word[j], keep);
          strcpy(keep, temp);

          int t = sum[j];
          sum[j] = keepn;
          keepn = t;
        }
      }
      strcpy(word[index-1], keep);
      sum[index-1] = keepn;
    }
  }

  for(int i = 0; i < index; i++)
    printf("%s %d\n", word[i], sum[i]);
  return 0;
}
