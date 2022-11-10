//C++ program to check is number strrong or not 
#include <iostream>
using namespace std;

//main program

int fact(int n)
{
    int sum=1;
    for(int i=1;i<=n;i++)
    {
        sum=sum*i;
    }
    return sum;
}
int main()
{
    int n;
    cout<<"Enter an number : ";
    cin>>n;
    int orignal=n;
    int sum=0;
    while(n>0)
    {
        int x=n%10;
        sum=sum+fact(x);
        n=n/10;
    }
    if(sum==orignal)
    {
        cout<<"\n Given number is strong ";
    }
    else
    {
        cout<<"\n Given number is not strong ";
    }

    return 0;
}
