#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;

public:
    Rectangle() {
        length = 0;
        breadth = 0;
    }

    Rectangle(int x) {
        length = x;
        breadth = x;
    }

    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    int area() {
        return length * breadth;
    }

    ~Rectangle() {
    }
};

int main() {
    Rectangle r[3] = {
        Rectangle(),
        Rectangle(5),
        Rectangle(4, 6)
    };

    for (int i = 0; i < 3; i++) {
        cout << r[i].area() << endl;
    }

    return 0;
}
