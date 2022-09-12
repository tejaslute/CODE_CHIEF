#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int size;
    cin>>size;
    int array[size];
    int k;
    cin>>k;
    for(int i=0;i<size;i++)
    {
      cin>>array[i];
    }
    int l=0,g=0,e=0;
    for(int i=0;i<size;i++){
      if(array[i]<k)
      {
        l++;
      }
      else if(array[i]==k)
      {
        e++;
      }
      else 
      {
        g++;
      }
    }
    cout<<l<<" "<<g<<" "<<e<<endl;
  }
  
  return 0;
}
