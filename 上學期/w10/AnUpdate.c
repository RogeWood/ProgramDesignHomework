#include <stdio.h>
#include <string.h>

char table[26][26];
char s[100005], key[100005];
int main()
{
    for(int i = 0; i < 26; i++)
        for(int j = 0; j < 26; j++)
            table[i][j] = (i+j) % 26;

    scanf("%s%s", s, key);
    int klen = strlen(key);
    int slen = strlen(s);
    for(int i = 0; i < klen; i++)
        key[i] = ((key[i] >= 'A' && key[i] <= 'Z') ? key[i] - 'A' : key[i] - 'a');


    int index = 0;
    for(int i = 0; i < slen; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] = table[s[i] - 'A'][(int)key[index]] + 'A';
        else
            s[i] = table[s[i] - 'a'][(int)key[index]] + 'a';
        index = (index+1)%klen;
    }
    printf("%s\n", s);
    return 0;
}
