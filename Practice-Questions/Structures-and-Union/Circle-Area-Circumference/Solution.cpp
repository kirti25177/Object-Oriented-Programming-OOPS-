#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct Circle {
    double radius;
};

int main() {
    Circle c;
    const double PI = 3.14;

    cin >> c.radius;

    double circumference = 2 * PI * c.radius;
    double area = PI * pow(c.radius, 2);

    cout << fixed << setprecision(2);
    cout << circumference << endl;
    cout << area << endl;

    return 0;
}
