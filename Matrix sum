#include <iostream>

using namespace std;
class Matrix
{
    int a[2][2];
public:
    Matrix(){}
    Matrix(int first,int second,int third,int fourth)
    {
        a[0][0]=first;
        a[0][1]=second;
        a[1][0]=third;
        a[1][1]=fourth;

    }
    Matrix operator+(Matrix x)
    {
        Matrix C ;
        C.a[0][0]= a[0][0]+ x.a[0][0];
        C.a[0][1]= a[0][1]+ x.a[0][1];  
         C.a[1][0]= a[1][0]+ x.a[1][0];  
         C.a[1][1]= a[1][1]+ x.a[1][1]; 
      return C;
    }
    void display()
    {
        cout<<a[0][0]<<" "<<a[0][1]<<endl;
        cout<<a[1][0]<<" "<<a[1][1]<<endl;
    }
};
int main()
{
    Matrix A(1,2,3,4);
    Matrix B(5,6,7,8);
    cout<<"Matrix A: "<<endl;
    A.display();
    cout<<"Matrix B: "<<endl;
    B.display();
    Matrix C;
    C= A+B;
    cout<<"Matrix C: "<<endl;
    C.display();
    return 0;
}
