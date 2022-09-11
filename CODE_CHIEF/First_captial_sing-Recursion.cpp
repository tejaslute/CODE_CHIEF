#include <bits/stdc++.h>
using namespace std;

int find(string s1)
{
  static int i = 0;
        if (i < s1.length())
        {
            if (isupper(s1[i]))
            {
                return i;
            }
            else
            {
                i = i + 1;
                return find(s1);
            }
        }
        else 
        {
          return 0;
        }
  
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string s;
    cin>>s;
    cout<<find(s)<<endl;
  }
  
  return 0;
}
