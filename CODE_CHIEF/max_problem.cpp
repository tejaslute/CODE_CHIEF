/*A participant can make 11 submission every 3030 seconds. If a contest lasts for XX minutes, what is the maximum number of submissions that the participant can make during it?

It is also given that the participant cannot make any submission in the last 55 seconds of the contest.*/
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x;
	    cin>>x;
	    cout<<x*2<<endl;
	}
	return 0;
}
