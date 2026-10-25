#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct Point {
    int x;
    int y;
};

int main() {
    Point p1, p2;

    cin >> p1.x >> p1.y;
    cin >> p2.x >> p2.y;

    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;

    double distance = sqrt(pow(dx, 2) + pow(dy, 2));

    double midpointX = (p1.x + p2.x) / 2.0;
    double midpointY = (p1.y + p2.y) / 2.0;

    cout << fixed << setprecision(2);

    cout << "Distance: " << distance << endl;
    cout << "Midpoint: (" << midpointX << ", "
         << midpointY << ")" << endl;

    return 0;
}
