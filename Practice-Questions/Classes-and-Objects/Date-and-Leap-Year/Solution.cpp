#include <iostream>
using namespace std;
class Date {
private:
    int day, month, year;
public:
    void getDate() {
        cin >> day >> month >> year;
    }
    void displayDate() {
        cout << day << " " << month << " " << year << endl;
    }
    void checkLeapYear() {
        if ((year % 400 == 0) ||
            (year % 4 == 0 && year % 100 != 0)) {
            cout << year << " is a leap year";
        } else {
            cout << year << " is not a leap year";
        }
    }
};
int main() {
    Date d;
    d.getDate();
    d.displayDate();
    d.checkLeapYear();
    return 0;
}
