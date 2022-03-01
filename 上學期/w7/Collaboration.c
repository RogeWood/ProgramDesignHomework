#include <stdio.h>

int n, a, count = 0;

void fun(int r, int w, int step, int rc, int wc);

int main()
{
    scanf("%d %d", &n, &a);
    fun(0, 0, 0, 0, 0);
    printf("%d", count);
    return 0;
}

void fun(int r, int w, int step, int rc, int wc)
{
    if(rc == a) count++;
    else if(wc == a) return;
    else if(step == n)
    {
        if(r >= w) count++;
        return;
    }
    else
    {
        fun(r+1, w, step+1, rc+1, 0);
        fun(r, w+1, step+1, 0, wc+1);
    }
    return;
}
