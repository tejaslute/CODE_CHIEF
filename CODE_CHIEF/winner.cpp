/*Nitin and Sobhagya were playing a game with coins. If Sobhagya has more coins then he is winning, otherwise Nitin is winning. Note that this means if both Nitin and Sobhagya have the same number of coins, then Nitin is winning.

Initially Nitin has AA coins while Sobhagya has BB coins. Then Ritik came and gave his CC coins to the player who is not winning currently, after which Satyarth came and repeated the same process (gave his DD coins to the player who is not winning currently).

Find the final winner of the game.*/

	
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int s,n,c,d;
	    cin>>n>>s>>c>>d;

	    if(s>n)
	    {
	    	n=n+c;
	    }

	    else if(n>=s)
	    {
	    	s=s+c;
	    }

	    if(s>n)
	    {
	    	n=n+d;
	    }

	    else if(n>=s)
	    {
	    	s=s+d;
	    }


	    if(s>n)
	    {
	    	cout<<"S"<<endl;
	    }

	    else
	    {
	    		cout<<"N"<<endl;
	    }

	}
	return 0;
}
