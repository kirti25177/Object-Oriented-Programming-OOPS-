#include <iostream>
using namespace std;

enum Direction {
    North = 1,
    East,
    West,
    South
};

int main() {
    int n;
    cin >> n;

    switch (n) {
        case North:
            cout << "We are headed towards North";
            break;

        case East:
            cout << "We are headed towards East";
            break;

        case West:
            cout << "We are headed towards West";
            break;

        case South:
            cout << "We are headed towards South";
            break;

        default:
            cout << "Invalid Input";
    }

    return 0;
}
