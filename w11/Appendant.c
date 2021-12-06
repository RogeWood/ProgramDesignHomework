#include <stdio.h>
#include <string.h>

struct Data{
  char Name [101];
  char ID[55];
  int Score [3]; // Linear Algebra , Calculus , English
}students[105];

int main()
{
  int n, q;
  scanf("%d %d", &n, &q);
  for(int i = 0; i < n; i++)
    scanf("%s %s %d %d %d", students[i].Name, students[i].ID, &students[i].Score[0], &students[i].Score[1], &students[i].Score[2]);

  while(q--)
  {
    int t;
    scanf("%d", &t);
    if(t == 1)
    {
      char name[101];
      scanf("%s", name);
      for(int i = 0; i < n; i++)
      {
        if(!strcmp(name, students[i].Name))
        {
          printf("%s\n", students[i].ID);
          break;
        }
      }
    }
    else if(t == 2)
    {
      char name[101], sub;
      scanf("%s %c", name, &sub);
      for(int i = 0; i < n; i++)
      {
        if(!strcmp(name, students[i].Name))
        {
          if(sub == 'L') printf("%d\n", students[i].Score[0]);
          else if(sub == 'C') printf("%d\n", students[i].Score[1]);
          else if(sub == 'E') printf("%d\n", students[i].Score[2]);
          break;
        }
      }
    }
    else if(t == 3)
    {
      char ID[101];
      scanf("%s", ID);
      for(int i = 0; i < n; i++)
      {
        if(!strcmp(ID, students[i].ID))
        {
          printf("%s\n", students[i].Name);
          break;
        }
      }
    }
    else
    {
      char ID[101], sub;
      scanf("%s %c", ID, &sub);
      for(int i = 0; i < n; i++)
      {
        if(!strcmp(ID, students[i].ID))
        {
          if(sub == 'L') printf("%d\n", students[i].Score[0]);
          else if(sub == 'C') printf("%d\n", students[i].Score[1]);
          else if(sub == 'E') printf("%d\n", students[i].Score[2]);
          break;
        }
      }
    }
  }
  return 0;
}
/*
5 4
Watame 410410606 100 100 40
Baelz 410410229 76 80 100
Watson 410410913 99 98 100
Kanata 410411227 75 85 45
Botan 410410814 68 95 80
1 Watame
2 Baelz E
3 410410913
4 410411227 L
*/
