#include <stdio.h>

int main()
{
  int grade;
  scanf("%d", &grade);

  if(grade >= 90)
    printf("A+");
  else if(grade >= 85)
    printf("A");
  else if(grade >= 80)
    printf("A-");
  else if(grade >= 77)
    printf("B+");
  else if(grade >= 73)
    printf("B");
  else if(grade >= 70)
    printf("B-");
  else if(grade >= 67)
    printf("C+");
  else if(grade >= 63)
    printf("C");
  else if(grade >= 60)
    printf("C-");
  else if(grade >= 50)
    printf("D");
  else
    printf("E");
  return 0;
}
