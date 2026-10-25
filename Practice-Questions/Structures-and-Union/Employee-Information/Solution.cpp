#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Employee {
    int id;
    string name;
    string dob;
    string doj;
    double salary;
};

int main() {
    Employee emp;

    cin >> emp.id;
    cin.ignore();

    getline(cin, emp.name);
    getline(cin, emp.dob);
    getline(cin, emp.doj);

    cin >> emp.salary;

    cout << "ID : " << emp.id << endl;
    cout << "Name : " << emp.name << endl;
    cout << "DOB : " << emp.dob << endl;
    cout << "DOJ : " << emp.doj << endl;
    cout << fixed << setprecision(1);
    cout << "Salary : " << emp.salary << endl;

    return 0;
}
