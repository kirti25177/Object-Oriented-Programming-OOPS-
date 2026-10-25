
#include <iostream>
using namespace std;

struct patient {
    int id;
    int gender;
    int age;
};

int main() {
    patient p[10];

    int maleCount = 0;
    int femaleCount = 0;
    int above40Count = 0;

    for (int i = 0; i < 10; i++) {
        cin >> p[i].id >> p[i].gender >> p[i].age;

        if (p[i].gender == 1) {
            maleCount++;
        } else if (p[i].gender == 2) {
            femaleCount++;
        }

        if (p[i].age > 40) {
            above40Count++;
        }
    }

    cout << maleCount << " " << femaleCount << endl;
    cout << above40Count << endl;

    return 0;
}
