/*Karan likes the number 4 very much.

Impressed by the power of this number, Karan has begun to look for occurrences of four anywhere. He has a /*list of T integers, for each of them he wants to calculate the number of occurrences of the digit 4 in the decimal representation. He is too busy now, so please help him.*/
#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    int number;
    cin>>number;
    int count=0;
    while(number>0)
    {
        int rem=number%10;
        if(rem==4)
        {
            count++;
        }
        number=number/10;
    }
    cout<<count<<endl;
}
	return 0;
}
