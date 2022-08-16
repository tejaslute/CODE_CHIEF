/*In a Chess match "a + b", each player has a clock which shows aa minutes at the start and whenever a player makes a move, bb seconds are added to this player's clock. Time on a player's clock decreases during that player's turns and remains unchanged during the other player's turns. If the time on some player's clock hits zero (but not only in this case), this player loses the game.

There's a 3 + 2 blitz chess match. After NN turns (i.e. \left\lfloor \frac{N+1}{2} \right\rfloor⌊ 
2
N+1
​
 ⌋ moves made by white and \left\lfloor \frac{N}{2} \right\rfloor⌊ 
2
N
​
 ⌋ moves made by black), the game ends and the clocks of the two players stop; they show that the players (white and black) have AA and BB seconds left respectively. Note that after the NN-th turn, b = 2b=2 seconds are still added to the clock of the player that made the last move and then the game ends.

Find the total duration of the game, i.e. the number of seconds that have elapsed from the start of the game until the end.*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n){
	    int x,a,b;
	    cin>>x>>a>>b;
	    cout<<2*(180+x)-(a+b)<<endl;
	    n--;
	}
	return 0;
}
