#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string s,t,m;
	    cin>>s;
	    cin>>t;
	    for(int i=0;i<5;i++)
	    {
	        if(s[i]==t[i])
	        {
	            m[i]='G';
	        }
	        else
	        {
	            m[i]='B';
	        }
	        cout<<m[i];
	    }
	    cout<<endl;
	}
	return 0;
}
