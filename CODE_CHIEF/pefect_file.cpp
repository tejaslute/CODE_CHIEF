#include <bits/stdc++.h>
using namespace std;


int main()
{
  int t;
  cin>>t;
  int sum=0;
  while(t--)
  {
    int n;
    cin>>n;
    for(int i=1;i<=n/2;i++)
    {
      if(n%i==0)
      {
        sum=sum+i;
      }
    }
    if(sum==n)
    {
      cout<<"true"<<endl;
    }
    else
    {
      cout<<"false"<<endl;
    }
  }
  
  return 0;
}
