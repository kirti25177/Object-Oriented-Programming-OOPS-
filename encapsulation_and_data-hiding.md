# Encapsulation and Data Hiding in C++

## 1. What Is Encapsulation?

Encapsulation is an OOP concept that combines data members and member functions into a single unit called a class.

It also allows us to control access to the data using access specifiers such as `private`, `public`, and `protected`.

### Real-Life Example

Consider a bank account.

- Data: Account balance
- Behaviours: Deposit money and withdraw money

We should not allow anyone to change the balance directly without following the required rules.

Encapsulation helps us control how the balance is accessed and modified.

## 2. What Is Data Hiding?

Data hiding means restricting direct access to an object's internal data.

In C++, we commonly use the `private` access specifier to achieve data hiding.

For example, a bank account's balance can be private so that other code cannot modify it directly.

## 3. Example of Encapsulation

```cpp
#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double initialBalance) {
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account(1000);

    account.deposit(500);

    cout << "Balance: " << account.getBalance();

    return 0;
}
```

### Output

```text
Balance: 1500
```

### Explanation

- `balance` is declared `private`.
- Code outside the class cannot directly access `balance`.
- `deposit()` provides a controlled way to increase the balance.
- `getBalance()` allows the balance to be read.
- The class controls how its data is accessed and modified.

## 4. What Happens Without Data Hiding?

Consider this example:

```cpp
#include <iostream>
using namespace std;

class BankAccount {
public:
    double balance;
};

int main() {
    BankAccount account;

    account.balance = -5000;

    cout << account.balance;

    return 0;
}
```

### Output

```text
-5000
```

Because `balance` is public, external code can assign an invalid value directly.

Making the data private and providing validated operations helps prevent this problem.

## 5. Using Getters and Setters

A **getter** is a member function used to retrieve a value.

A **setter** is a member function used to modify a value, potentially after validating it.

Example:

```cpp
#include <iostream>
using namespace std;

class Student {
private:
    int age;

public:
    void setAge(int a) {
        if (a > 0) {
            age = a;
        }
    }

    int getAge() const {
        return age;
    }
};

int main() {
    Student s1;

    s1.setAge(18);
    cout << s1.getAge();

    return 0;
}
```

### Output

```text
18
```

### Explanation

- `setAge()` changes the age only if the supplied value is positive.
- `getAge()` returns the stored age.
- `const` after `getAge()` indicates that this member function does not modify the object's ordinary data members.

Note: In production code, initialize `age` in a constructor or give it a default value so that it never remains uninitialized.

## 6. Advantages of Encapsulation

1. **Data protection:** Restricts unauthorized direct access.
2. **Validation:** Allows values to be checked before modification.
3. **Maintainability:** Internal implementation can change without necessarily changing the public interface.
4. **Modularity:** Data and related operations are grouped in one class.
5. **Controlled access:** The class decides which operations are available to other code.

## 7. Encapsulation vs Data Hiding

| Encapsulation | Data Hiding |
|---|---|
| Bundles data and related functions into a class. | Restricts access to internal data or implementation details. |
| Focuses on grouping and controlled interaction. | Focuses on limiting access. |
| Achieved through class design and access control. | Commonly achieved using `private` and other access-control mechanisms. |
| Helps organize and maintain code. | Helps protect object invariants and internal state. |

## 8. Important Points

- Encapsulation combines data and methods into a class.
- Data hiding restricts direct access to internal data.
- `private` members cannot be accessed directly from ordinary external code.
- Public member functions can provide controlled access to private data.
- Getters retrieve values, while setters modify values.
- Good encapsulation includes validation where needed.

## 9. Practice Questions

1. Define encapsulation.
2. What is data hiding?
3. How does `private` help achieve data hiding?
4. What is the difference between encapsulation and data hiding?
5. What are getters and setters?
6. Why should a bank account balance not always be public?
7. Write a class that stores a private salary and provides validated access.
8. Write a class that stores a private age and rejects non-positive values.
9. Explain two advantages of encapsulation.
10. Can a public member function access private data members of its own class?

---

**Next Topic:** Abstraction in C++
