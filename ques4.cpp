#include <iostream>
using namespace std;

class Sample {
    int x;
public:
    Sample(int a = 0) {
        x = a;
    }
    void show() {
        cout << x << endl;
    }
};

int main() {

    int *ip = new int(10);
    cout << *ip << endl;
    delete ip;

    float *fp = new float(5.5);
    cout << *fp << endl;
    delete fp;

    int *iarr = new int[3];
    for(int i = 0; i < 3; i++)
        iarr[i] = (i + 1) * 10;
    for(int i = 0; i < 3; i++)
        cout << iarr[i] << " ";
    cout << endl;
    delete[] iarr;

    float *farr = new float[3];
    for(int i = 0; i < 3; i++)
        farr[i] = (i + 1) * 1.1;
    for(int i = 0; i < 3; i++)
        cout << farr[i] << " ";
    cout << endl;
    delete[] farr;

    Sample *obj = new Sample(100);
    obj->show();
    delete obj;

    Sample *objs = new Sample[3]{Sample(1), Sample(2), Sample(3)};
    for(int i = 0; i < 3; i++)
        objs[i].show();
    delete[] objs;

    return 0;
}
