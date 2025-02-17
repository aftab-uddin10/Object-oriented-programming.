#include<iostream>
using namespace std;
class Integer
{
int m,n;
public:
    Integer()   //Default constructor
    {
     m=0;
     n=0;
    }
    Integer(int x, int y)  //Parameterize constructor
    {
        m=x;
        n=y;
    }
    Integer(Integer &i)    //Copy constructor
    {
        m=i.m;
        n=i.n;
    }
    void display(void)
    {
        cout <<"M = "<<m<<endl;
        cout <<"N = "<<n<<endl;
    }

};

int main(){
    Integer I1;           //Default constructor
    Integer I2(20,30);    //Parameterize constructor
    Integer I3(I2);       //Copy constructor
    I1.display();
    I2.display();
    I3.display();
    return 0;
}

