#include<iostream>
using namespace std;
class Code
{
private:
    int id;
public:
    Code(){}
    Code(int a)
    {
        id=a;
    }
    Code(Code &x)    //copy constructor
    {
        id= x.id;
    }
    void display(void)
    {
        cout<<id;
    }
};

int main()
{
    Code A(100);
    Code B(A);    //copy constructor
    Code C=A;   //copy constructor
    Code D;
    D=A;
    cout<<"\n Id of A : ";
    A.display();
    cout<<"\n Id of B : ";
    B.display();
    cout<<"\n Id of C : ";
    C.display();
     cout<<"\n Id of D : ";
    D.display();
     return 0;

}
