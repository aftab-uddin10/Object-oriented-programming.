#include <iostream>
using namespace std;
class Counter {
private:
    static int objectCount; 

public:

    Counter() {
        ++objectCount;
    }

    ~Counter() {
        --objectCount;
    }

   
    static int getCount() {
        return objectCount;
    }
};

int Counter::objectCount = 0;

int main() {
   
    Counter obj1;
    Counter obj2;
    Counter obj3;

    cout << "Number of objects created: " << Counter::getCount() << endl;
    Counter obj4;

    cout << "Number of objects now: " << Counter::getCount() << endl;

    return 0;
}
