#include <stdio.h>

int main()
{
    double a, b, c, d;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    
    if(a+b+c-d <= 0.000001 && a+b+c-d >= -0.000001) printf("Equal to");
    else if(a+b+c < d) printf("Less than");
    else printf("Greater than");
    return 0;
}
