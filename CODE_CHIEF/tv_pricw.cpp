/*Chef is looking to buy a TV and has shortlisted two models. The first one costs AA rupees, while the second one costs BB rupees.

Since there is a huge sale coming up on Chefzon, Chef can get a flat discount of CC rupees on the first TV, and a flat discount of DD rupees on the second one.

Help Chef determine which of the two TVs would be cheaper to buy during the sale.*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	
	
	
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if ((a-c)>(b-d))
	    {
	        cout<<"Second"<<endl;
	    }
	    else if((a-c)==(b-d))
	    {
	        cout<<"Any"<<endl;
	    }
	    else
	    {
	        cout<<"First"<<endl;
	    }
	}
	return 0;
}
