#include <iostream>
using namespace std;
class ComplexNumber {
private:
    double r;
    double i;

public:

    void SetValue(double real, double imaginary) {
        r = real;
        i = imaginary;
    }
    void printComplex() {
         cout << r;
        if (i >= 0)
            cout << " + " << i << "i";
        else
            cout << " - " << -i << "i";
           cout << endl;
    }
};

int main() {
    ComplexNumber A,B;
    
       A.SetValue(3.0, -2.5); 
     cout<<"A: "; A.printComplex();

      B.SetValue(1.5, 4.2);
    cout<<"B: "; B.printComplex();

    return 0;
}
