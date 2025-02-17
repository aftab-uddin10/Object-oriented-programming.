#include<iostream>
using namespace std;
class Overloading
{
private:
   int real,imag;
public:
void input(int real,int imag)
{
    this->real= real;
    this->imag = imag;
}
    Overloading add(Overloading x)       //  C=A.add(B)
    {
        Overloading T;
        T.real = real + x.real;
        T.imag = imag + x.imag;
        return T;
    }
     Overloading operator+(Overloading x)       //  C=A+B
    {
        Overloading T;
        T.real = real + x.real;
        T.imag = imag + x.imag;
        return T;
    }
     Overloading operator+(int num)       //  C=A+5
    {
        Overloading T;
        T.real = real + num;
        T.imag = imag ;
        return T;
    }
    Overloading friend operator+(int num,Overloading A)     //  C=5+A
    {
        Overloading T;
        T.real = num + A.real;
          T.imag = A.imag ;
        return T;
    }
    void output()
    {
        cout << real <<" + i" <<imag <<endl;
    }
};

int main()
{
    Overloading A,B;
    A.input(1,2);
    B.input(3,4);
    Overloading C;

    C= A.add(B);
    // C = A+B;
    //C = A+5;
    //C = 5+A;
    C.output();
    return 0;
}
