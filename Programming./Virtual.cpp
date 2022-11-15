
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
class A {
    public:
     virtual void display()
    {
        cout<<"Base class "<<endl;
    }
};

class B : public A{
    public:
    void display()
    {
        cout<<"Class B "<<endl;
    }
};

class C : public A{
    public:
    void display()
    {
        cout<<"Class C"<<endl;
    }
};





int main()
{
    A * ptr;
    B b ;
    ptr=&b;
    
    ptr->display();
    b.display();

    return 0;
}
