
#include <iostream>
#include <string>
using namespace std;

struct student {
    int rollNumber;
    string name;
    double mark1, mark2, mark3, mark4, mark5;
    double total, average;
};
int main() {
    student s;

    cin >> s.name >> s.rollNumber;
    cin >> s.mark1 >> s.mark2 >> s.mark3
        >> s.mark4 >> s.mark5;

    s.total = s.mark1 + s.mark2 + s.mark3
            + s.mark4 + s.mark5;

    s.average = s.total / 5.0;

    cout << "NAME: " << s.name << endl;
    cout << "ROLL NO: " << s.rollNumber << endl;

    if (s.mark1 >= 50 && s.mark2 >= 50 &&
        s.mark3 >= 50 && s.mark4 >= 50 &&
        s.mark5 >= 50) {

        cout << "RESULT: Pass" << endl;

        if (s.average >= 75) {
            cout << "Distinction";
        } else if (s.average >= 60) {
            cout << "First Class";
        } else {
            cout << "Second Class";
        }

    } else {
        cout << "RESULT: Fail";
    }

    return 0;
}
