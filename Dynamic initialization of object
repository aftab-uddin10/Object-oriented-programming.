#include<iostream>
using namespace std;
class DynamicInitialization
{
private:
    float sum;
public:
   DynamicInitialization(){}
   DynamicInitialization(int a, int b, float c=5.4);
   DynamicInitialization(int a,int b,int c);
   void display(void);
};
DynamicInitialization :: DynamicInitialization(int a, int b, float c)
{
    sum=a+b+c;
}
DynamicInitialization :: DynamicInitialization(int a, int b, int c)
{
    sum=a+b+c;
}
void DynamicInitialization::display()
{
    cout <<"Sum : "<<sum<<endl;
}
int main()
{
    int p,q,s;
    float r;
    cout<<"Enter values : ";
    cin>>p>>q>>r;
    DynamicInitialization A(p,q,r);
    cout<<"Enter values : ";
    cin>>p>>q>>s;
     DynamicInitialization B(p,q,s);
     cout<<"Enter values : ";
      cin>>p>>q;
     DynamicInitialization C(p,q); 
     A.display();
     B.display();
     C.display();
    
    return 0;
}

