#include <iostream>
#include <vector>
#include <cmath>
#define IO ios::sync_with_stdio(0);cin.tie(0)
#define MAXN 1000001
using namespace std;

int arr[MAXN] = {0};

int main()
{
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
    return 0;
}
