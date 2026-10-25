
#include <iostream>
using namespace std;
class Occurrence {
private:
    long long number;
    int digit;
public:
    void getInput() {
        cin >> number >> digit;
    }
    int countOccurrence() {
        int count = 0;
        do {
            int currentDigit = number % 10;
            if (currentDigit == digit) {
                count++;
            }
            number /= 10;
        } while (number > 0);
        return count;
    }
};

int main() {
    Occurrence obj;
    obj.getInput();
    cout << obj.countOccurrence();
    return 0;
}
