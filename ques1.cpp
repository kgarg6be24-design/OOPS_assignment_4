#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;

public:
 
    Rectangle() {
        length = 0;
        breadth = 0;
    }

 
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

   
    Rectangle(int x) {
        length = x;
        breadth = x;
    }

    
    int area() {
        return length * breadth;
    }
};

int main() {

    Rectangle r1;
    cout << "Area of rectangle r1: " << r1.area() << endl;

    Rectangle r2(5);
    cout << "Area of rectangle r2: " << r2.area() << endl;

    Rectangle r3(4, 6);
    cout << "Area of rectangle r3: " << r3.area() << endl;

    return 0;
}
