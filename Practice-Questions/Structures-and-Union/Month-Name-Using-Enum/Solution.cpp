#include <iostream>
using namespace std;

enum Month {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main() {
    int n;
    cin >> n;

    switch (n) {
        case JANUARY:
            cout << "Month: JANUARY";
            break;
        case FEBRUARY:
            cout << "Month: FEBRUARY";
            break;
        case MARCH:
            cout << "Month: MARCH";
            break;
        case APRIL:
            cout << "Month: APRIL";
            break;
        case MAY:
            cout << "Month: MAY";
            break;
        case JUNE:
            cout << "Month: JUNE";
            break;
        case JULY:
            cout << "Month: JULY";
            break;
        case AUGUST:
            cout << "Month: AUGUST";
            break;
        case SEPTEMBER:
            cout << "Month: SEPTEMBER";
            break;
        case OCTOBER:
            cout << "Month: OCTOBER";
            break;
        case NOVEMBER:
            cout << "Month: NOVEMBER";
            break;
        case DECEMBER:
            cout << "Month: DECEMBER";
            break;
        default:
            cout << "Invalid month input";
    }

    return 0;
}
