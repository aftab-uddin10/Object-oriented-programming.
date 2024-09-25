#include <iostream>
#include <cmath> 
using namespace std;
class Circle {
private:

    double radius;

public:

    Circle(double initialRadius) {
            radius=initialRadius;
        cout << "Circle created with radius " << radius << endl;
    }

    ~Circle() {
         cout << "Circle with radius " << radius << " is being destroyed." << endl;
    }
    double calculate() {
        return M_PI * pow(radius, 2);
    }
};

int main() {

    Circle myCircle(5.0);
    double area = myCircle.calculate();
    cout << "Area of the circle: " << area << endl;

    Circle anotherCircle(3.0);
    double anotherArea = anotherCircle.calculate();
    cout << "Area of the second circle: " << anotherArea << endl;

    return 0;
}
