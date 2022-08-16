//There were initially XX million people in a town, out of which YY million people left the town and ZZ million people immigrated to this town.

//Determine the final population of town in millions.
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    cout<<x-y+z<<endl;
	}
	return 0;
}
