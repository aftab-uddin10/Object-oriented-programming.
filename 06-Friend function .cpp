#include <iostream>

using namespace std;

class ABC; //Forward declaration

class XYZ
 {
    int x;
public:
   void setData(int a)
{
    x=a;
}
friend void max(XYZ ob1, ABC ob2);
};
class ABC
{
   int x;
public:
   void setData(int a)
{
   x=a;
}
friend void max(XYZ ob1, ABC ob2);
};

void max(XYZ ob1, ABC ob2){

  if(ob1.x>=ob2.x) {

  cout<<ob1.x<<" is maximum";
 }

else
{
cout<<ob2.x<<" is maximum";
}
}

int main ()
{

ABC ob1;

XYZ ob2;

ob1.setData(10);

ob2.setData(20);

max(ob2, ob1);

return 0;

}
