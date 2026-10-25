#include <iostream>
using namespace std;
class Operation {
private:
    int a, b;

public:
    void getInput() {
        cin >> a >> b;
    }

    void calculate() {
        cout << "Addition of two numbers: " << a + b << endl;
        cout << "Difference of two numbers: " << a - b << endl;
        cout << "Product of two numbers: " << a * b << endl;

        if (b == 0) {
            cout << "Division by zero not possible" << endl;
            cout << "Division by zero not possible" << endl;
        } else {
            cout << "Division of two numbers: " << a / b << endl;
            cout << "Modulus of two numbers: " << a % b << endl;
        }
    }
};

int main() {
    Operation op;
    op.getInput();
    op.calculate();
    return 0;
}
