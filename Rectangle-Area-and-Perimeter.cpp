#include <iostream>
using namespace std;
class Rectangle {
public:
    int length, breadth;
    void setDimensions(int l, int b) {
        length = l;
        breadth = b;
    }
    int area() {
        return length * breadth;
    }
    int perimeter() {
        return 2 * (length + breadth);
    }
};
int main() {
    int length, breadth;
    cin >> length >> breadth;

    Rectangle r;
    r.setDimensions(length, breadth);

    cout << "Area: " << r.area() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;

    return 0;
}
