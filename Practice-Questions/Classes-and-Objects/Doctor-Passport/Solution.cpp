
#include <iostream>
#include <string>
using namespace std;

class Doctor {
public:
    string name;
    string address;
    int wardNumber;

    void getDetails() {
        getline(cin, name);
        getline(cin, address);
        cin >> wardNumber;
    }

    void displayPassport() {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Ward Number: " << wardNumber << endl;
    }
};

int main() {
    Doctor doctor;
    doctor.getDetails();

    // Assign the doctor's information to a passport object
    Doctor passport = doctor;

    passport.displayPassport();

    return 0;
}
