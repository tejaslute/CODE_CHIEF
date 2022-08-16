/*It's the sale season again and Chef bought items worth a total of XX rupees. The sale season offer is as follows:

if X \le 100X≤100, no discount.
if 100 \lt X \le 1000100<X≤1000, discount is 2525 rupees.
if 1000 \lt X \le 50001000<X≤5000, discount is 100100 rupees.
if X \gt 5000X>5000, discount is 500500 rupees.
Find the final amount Chef needs to pay for his shopping.*/
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x;
	    cin>>x;
	    if(x<=100)
	    {
	        cout<<x<<endl;
	    }
	    else if(100<x<=1000)
	    {
	        cout<<x-25<<endl;
	    }
	    else if(1000<x<=5000)
	    {
	        cout<<x-100<<endl;
	    }
	    else
	    {
	        cout<<x-500<<endl;
	    }
	}
	return 0;
}
