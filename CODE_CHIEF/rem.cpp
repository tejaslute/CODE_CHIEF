/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    
    int n ;
    cin>>n;
    
    int sum=0;
    
    for (char ch : s)
    {
        if (isdigit(ch))
    {
    sum += ch - '0';
    }
    }
    
    cout<<sum%n;

    return 0;
}

