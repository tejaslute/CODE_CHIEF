#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
 {
  ll t,i,n,j;
  cin>>t;
   for ( i = 0; i < t; i++)
   {
     cin>>n;
     ll count=0;
  set<int>s;
     for ( j = 0; j < n; j++)
     {
        ll a;
        cin>>a;
        s.insert(a);

     }
     for (auto it = s.begin(); it!=s.end(); it++)
     {
      count++;
     }
     cout<<count<<endl;
   }
   
   return 0;
}
