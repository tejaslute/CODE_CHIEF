/*Chef's computer has NN GB of free space. He wants to save XX files, each of size 1 GB and YY files, each of size 2 GB on his computer. Will he be able to do so?

Chef can save all the files on his computer only if the total size of the files is less than or equal to the space available on his computer.*/
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,n;
	    cin>>n>>x>>y;
	    if(x+y*2<=n)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
