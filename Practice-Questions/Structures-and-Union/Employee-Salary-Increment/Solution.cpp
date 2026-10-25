
#include <iostream>
#include <string>
using namespace std;

struct DEPT {
    string name;
    int employeeId;
    int experience;
    int salary;
};

int main() {
    DEPT employees[3];

    for (int i = 0; i < 3; i++) {
        cin >> employees[i].name
            >> employees[i].employeeId
            >> employees[i].experience
            >> employees[i].salary;

        if (employees[i].experience >= 10) {
            employees[i].salary *= 1.10;
        } else if (employees[i].experience >= 5) {
            employees[i].salary *= 1.05;
        } else if (employees[i].experience >= 1) {
            employees[i].salary *= 1.02;
        }
    }

    for (int i = 0; i < 3; i++) {
        cout << "Employee Name : " << employees[i].name << endl;
        cout << "Employee Id : " << employees[i].employeeId << endl;
        cout << "years of experience : " << employees[i].experience << endl;
        cout << "salary : " << employees[i].salary;

        if (i < 2) {
            cout << endl << endl;
        }
    }

    return 0;
}
