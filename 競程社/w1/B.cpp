#include <iostream>
#include <vector>
#include <cmath>
#define IO ios::sync_with_stdio(0);cin.tie(0)
#define MAXN 1000001
using namespace std;

int arr[MAXN] = {0};

int main()
{
    IO;
    vector<int> prime;

    for(int i = 2; i < MAXN; i++)
    {
        if(!arr[i])
        {
            prime.push_back(i);
            for(int j = i+i; j < MAXN; j+=i)
                arr[j] = 1;
        }
    }

    long long int n;
    while(cin >> n)
    {
        long long int limit = (long long int)sqrt(n);

        int isPrime = 1;
        for(int i = 0; i < (int)prime.size(); i++)
        {
            if(limit < prime[i]) break;
            if(!(n % prime[i]))
            {
                isPrime = 0;
                break;
            }
        }
        if(n == 1 || n == 0) isPrime = 0;
        cout << ((isPrime) ? "isprime" : "oh no") << '\n';
    }
    return 0;
}
