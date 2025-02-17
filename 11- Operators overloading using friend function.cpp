#include<iostream>
using namespace std;
class Complex
{
private:
   int real;
   int imag;
public:
    Complex(){}
    Complex(int real,int imag)
    {
       this->real = real;
       this->imag = imag ;
    }
    friend Complex operator+(Complex,Complex);
    void display();
};

Complex operator+(Complex A,Complex B)
{
    Complex C;
    C.real= A.real+B.real;
     C.imag = A.imag+B.imag;
    return C;
}

void Complex::display()
{
    cout<<real<<"+"<<imag<<"j"<<endl;
}

int main()
{
    Complex num1(2,3);
    Complex num2(3,4);
    Complex num3;
    num3= num1+num2;
    num3.display();
    return 0;
}
