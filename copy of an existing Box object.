#include <iostream>
using namespace std;
class Box {
private:
    double length;
    double width;
    double height;

public:
    Box(double len, double wid, double hei)
        {
             length=len;
             width=wid; 
             height=hei;
        }

    Box(Box& x) {
        length = x.length;
        width = x.width;
        height = x.height;
    }

    double getLength() const { return length; }
    double getWidth() const { return width; }
    double getHeight() const { return height; }
};

int main() {
  
    Box originalBox(10.0, 5.0, 3.0);

    Box copiedBox(originalBox);

    cout << "Original Box: L=" << originalBox.getLength()
              << ", W=" << originalBox.getWidth()
              << ", H=" << originalBox.getHeight() <<endl;

    cout << "Copied Box: L=" << copiedBox.getLength()
              << ", W=" << copiedBox.getWidth()
              << ", H=" << copiedBox.getHeight() <<endl;

    return 0;
}
