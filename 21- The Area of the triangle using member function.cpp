#include <iostream>
using namespace std;
class Triangle {
private:
    double b;
    double h;

public:
    void set_value(double base, double height) {
        b = base;
        h = height;
    }

    double calculate() {
        double Area;
        Area = 0.5 * b * h;
        return Area;
    }
};

int main() {
    Triangle A;

    A.set_value(7.0, 4.0);
    cout << "Area of the triangle: " << A.calculate() <<endl;

    return 0;
}
