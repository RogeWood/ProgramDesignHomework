#include <iostream>
#define IO ios::sync_with_stdio(0);cin.tie(0)
using namespace std;

unsigned long long int pow(int a,int  b, int mod);
int main()
{
    IO;
    unsigned long long int x, y, p;
    cin >> x >> y >> p;
    cout << pow(x, y, p)%p << '\n';
    return 0;
}
unsigned long long int pow(int a, int  b, int mod)
{
    if(b == 0) return 1;
    unsigned long long int c = pow(a, b/2, mod) % mod;

    if(b%2 == 1)
        return ((c*c)%mod)*(a % mod) % mod;
    else
        return (c*c) % mod;
}
