#include <stdio.h>
int x, y, i;

int fun(int index);

int main()
{
    scanf("%d %d %d", &x, &y, &i);
    
    printf("%d", fun(i));
    return 0;
}

int fun(int index)
{
    if(index == 1) return x;
    else if(index == 2) return y;
    else if(index % 2) return fun(index-1) + fun(index-2);
    else return 2*fun(index-1);
}