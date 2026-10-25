#include <iostream>
#include <string>
using namespace std;

class Input {
private:
    string name;
    int rollNumber;

public:
    void getDetails() {
        cin >> name >> rollNumber;
    }

    void displayDetails() {
        cout << rollNumber << ": " << name;
    }
};

int main() {
    Input student;
    student.getDetails();
    student.displayDetails();

    return 0;
}
