#include <iostream>
#include <iomanip>
using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main() {
    Time t1, t2, diff;

    char colon;

    cin >> t1.hours >> colon >> t1.minutes >> colon >> t1.seconds;
    cin >> t2.hours >> colon >> t2.minutes >> colon >> t2.seconds;

    int total1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int total2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;

    int difference = total1 - total2;

    diff.hours = difference / 3600;
    difference %= 3600;

    diff.minutes = difference / 60;
    diff.seconds = difference % 60;

    cout << setfill('0')
         << setw(2) << diff.hours << ":"
         << setw(2) << diff.minutes << ":"
         << setw(2) << diff.seconds << endl;

    return 0;
}
