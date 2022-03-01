#include <stdio.h>
#include <stdlib.h>

int arr[100005];

int main()
{
    int n, q;
    scanf("%d %d", &n, &q);

    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    while(q--)
    {
        int key, flag = 0;
        scanf("%d", &key);

        int right = n, left = 0, index;
        while(right != left)
        {
            index = (right+left)/2;
            if(arr[index] == key)
            {
                flag = 1;
                break;
            }
            else if(key < arr[index]) right = index;
            else left = index+1;
        }
        if(flag) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
