#include <iostream>
#include <string.h>

using namespace std;

int main()
{
  char s[10005];
  cin >> s;
  int slen = strlen(s);
  if(slen % 4)
  {
    int n = 4 - slen% 4;
    while(n--)
      strcat(s, "x");
  }
  slen = strlen(s);
  cout << s << endl;
  string key;
  cin >> key;
  char rek[1005];
  for(int i = 0 ; i < key.length(); i++)
    rek[i] = key[key.length()-1-i];

  long long int t = 0;
  for(int i = 0, j = 0; i <= slen; i++, j++)
  {
    if(j == key.length() || i == slen)
    {
      j = 0;
      cout << t << ' ';
      t = 0;
    }
    t *= 16*16;
    t += s[i] ^ key[j] ^ rek[j];
  }
  return 0;
}
