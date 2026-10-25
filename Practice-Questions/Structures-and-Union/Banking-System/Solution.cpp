#include <iostream>
#include <iomanip>
using namespace std;

union AccountData {
    struct {
        int customerId;
        int accountNumber;
        double balance;
    } account;
};

int main() {
    AccountData data;
    double depositAmount, withdrawAmount;

    cin >> data.account.customerId;
    cin >> data.account.accountNumber;
    cin >> data.account.balance;
    cin >> depositAmount;
    cin >> withdrawAmount;

    data.account.balance += depositAmount;
    cout << "Amount deposited successfully." << endl;

    if (withdrawAmount <= data.account.balance) {
        data.account.balance -= withdrawAmount;
        cout << "Amount withdrawn successfully." << endl;
    } else {
        cout << "Insufficient balance. Withdrawal failed." << endl;
    }

    cout << "Account details:" << endl;
    cout << "Customer ID: " << data.account.customerId << endl;
    cout << "Account number: " << data.account.accountNumber << endl;
    cout << fixed << setprecision(2);
    cout << "Balance: " << data.account.balance << endl;

    return 0;
}
