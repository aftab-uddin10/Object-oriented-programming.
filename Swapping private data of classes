#include <iostream>
using namespace std;
class class_2;
class class_1
{
    int value1;
public:
    void inData(int a)
    {
        value1 = a;
    }
    void display(void)
    {
        cout<< value1 <<endl;
    }
    friend void exchange (class_1 &x, class_2 &y);
};
class class_2
{
    int value2;
public:
    void inData(int a)
    {
        value2 = a;
    }
    void display(void)
    {
        cout <<value2 << endl;
    }
    friend void exchange (class_1 &x, class_2 &y);
};
void exchange (class_1 &x, class_2 &y)
{
    int temp = x.value1;
    x.value1 = y.value2;
    y.value2 = temp;
}
int main ()
{
     class_1 c1;
     class_2 c2;
     c1.inData(100);
     c2.inData(200);
     cout <<"values before exchange"<<endl;
      c1.display();
      c2.display();
      exchange(c1,c2);
    cout <<"values after exchange"<<endl;
      c1.display();
      c2.display();
      return 0;
}

