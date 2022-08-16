/*Chef has two numbers AA and BB.

In one operation, Chef can choose either AA or BB and multiply it by 22.

Determine whether he can make both AA and BB equal after any number (possibly, zero) of moves.
*/
#include <iostream>
using namespace std;

int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          int a,b;
          cin>>a>>b;
          while(a%2==0)
          a/=2;
          while(b%2==0)
          b/=2;
          if(a==b)
          {
               cout<<"yes"<<endl;
          }
          else
          {
               cout<<"no"<<endl;
          }
     }
	
	return 0;
}
