/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<string>
using namespace std;

char lostCharMw(string s1,string s2)
{
    char answer;
    
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]!=s2[i])
        {
            answer=s1[i];
            break;
        }
    }
    return answer;
}

int main()
{
    cout<<lostChar("TejasL","Tejas");
    return 0;
}
