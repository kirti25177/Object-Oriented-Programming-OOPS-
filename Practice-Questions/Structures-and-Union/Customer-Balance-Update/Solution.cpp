#include <iostream>
using namespace std;

union Customers {
    struct {
        int customerId;
        int accountNumber;
        int balance;
    } data;
};

int main() {
    Customers customer;
    int balances[3];

    for (int i = 0; i < 3; i++) {
        cin >> customer.data.customerId
            >> customer.data.accountNumber
            >> customer.data.balance;

        if (customer.data.balance > 1000) {
            balances[i] = customer.data.balance + 100;
        } else {
            balances[i] = -1;
        }
    }

    bool first = true;

    for (int i = 0; i < 3; i++) {
        if (balances[i] != -1) {
            if (!first) {
                cout << " ";
            }
            cout << balances[i];
            first = false;
        }
    }

    return 0;
}
