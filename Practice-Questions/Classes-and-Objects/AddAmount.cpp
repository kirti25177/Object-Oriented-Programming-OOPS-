
#include <iostream>
using namespace std;
class AddAmount {
private:
    int amount;
public:
    AddAmount() {
        amount = 50;
    }
    AddAmount(int deposit) {
        amount = 50 + deposit;
    }
    void display() {
        cout << amount << endl;
    }
};
int main() {
    int deposit;
    cin >> deposit;

    AddAmount account(deposit);
    account.display();

    return 0;
}
