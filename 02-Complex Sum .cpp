#include<iostream>
using namespace std;
class Complex
{
private:
    float x,y;
public:
    Complex(){}        //Default constructor
    Complex(float a)            
    {
        x=y=a;
    }
    Complex(float real,float imag)
    {
        x=real;
        y= imag;
    }
    friend Complex sum(Complex c1,Complex c2);
    friend void show(Complex);

};

Complex sum(Complex c1,Complex c2)
{
    Complex c3;
    c3.x= c1.x + c2.x;
    c3.y=c1.y + c2.y;
    return c3;
}
void show(Complex c)
{
    cout <<c.x<<" + j"<<c.y<<endl;

}
int main()
{
    Complex P,Q,R;
    P=Complex(2.5,3.9);
    Q= Complex(1.6);
    R= sum(P,Q);
    cout<<"P= ";
    show(P);
     cout<<"Q= ";
    show(Q);
     cout<<"R= ";
    show(R);
    return 0;
}
