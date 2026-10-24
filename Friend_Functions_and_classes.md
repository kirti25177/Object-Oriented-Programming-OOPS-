# Friend Functions and Friend Classes in C++

## 1. What Is a Friend Function?

A friend function is a non-member function that is granted permission to access the private and protected members of a class.

It is declared inside the class using the `friend` keyword.

Although declared inside the class, a friend function is not a member function of that class.

## 2. Syntax

```cpp
class MyClass {
private:
    int value;

public:
    friend void display(MyClass obj);
};
```

Here, `display()` is a friend function of `MyClass`.

## 3. Example of a Friend Function

```cpp
#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v) {
        value = v;
    }

    friend void display(Number n);
};

void display(Number n) {
    cout << "Value: " << n.value;
}

int main() {
    Number n1(100);
    display(n1);

    return 0;
}
```

### Output

```text
Value: 100
```

### Explanation

- `value` is a private data member.
- `display()` is declared as a friend of `Number`.
- The friend function can access `n.value` despite it being private.
- `display()` is called like a normal function, not through an object using the dot operator.

## 4. Important Properties of Friend Functions

- A friend function is not a member of the class.
- It can access private and protected members of the class that grants friendship.
- It is declared using the `friend` keyword.
- It does not have a `this` pointer because it is not a member function.
- It is called like an ordinary function.
- Friendship is not automatically inherited, reciprocal, or transitive.

## 5. Friend Function Accessing Two Classes

A friend function can be granted access by more than one class.

```cpp
#include <iostream>
using namespace std;

class B;

class A {
private:
    int x;

public:
    A() {
        x = 10;
    }

    friend int sum(A, B);
};

class B {
private:
    int y;

public:
    B() {
        y = 20;
    }

    friend int sum(A, B);
};

int sum(A a, B b) {
    return a.x + b.y;
}

int main() {
    A a;
    B b;

    cout << sum(a, b);

    return 0;
}
```

### Output

```text
30
```

### Explanation

- Both `A` and `B` declare `sum()` as a friend.
- `sum()` can access `a.x` and `b.y`.
- The forward declaration `class B;` allows `B` to be mentioned in the friend declaration inside `A`.

## 6. What Is a Friend Class?

A friend class is a class whose member functions are granted access to the private and protected members of another class.

It is declared using the `friend class` syntax.

### Example

```cpp
#include <iostream>
using namespace std;

class A {
private:
    int value = 50;

    friend class B;
};

class B {
public:
    void display(A obj) {
        cout << obj.value;
    }
};

int main() {
    A a;
    B b;

    b.display(a);

    return 0;
}
```

### Output

```text
50
```

### Explanation

- `B` is declared as a friend of `A`.
- Member functions of `B` can access the private members of `A`.
- Friendship does not make `B` a derived class of `A`.

## 7. Friend Function vs Member Function

| Friend Function | Member Function |
|---|---|
| Not a member of the class. | Belongs to the class. |
| Declared with `friend` inside the class. | Declared as a class member. |
| Has no `this` pointer. | Non-static member functions have a `this` pointer. |
| Called like an ordinary function. | Usually called through an object or other appropriate member-access expression. |
| Can access private members only when friendship is granted. | Can access private members of its own class. |

## 8. Advantages and Disadvantages

### Advantages

1. Allows controlled access for specific external functions or classes.
2. Can simplify operations involving private data from multiple classes.
3. Can be useful for certain operator overloads.

### Disadvantages

1. Increases coupling between classes and external functions.
2. Can weaken encapsulation if used excessively.
3. Makes code harder to maintain if too many functions receive special access.

## 9. Important Points

- Use `friend` to grant special access.
- Friendship must be explicitly granted by the class whose private or protected members need to be accessed.
- A friend function is not a member function.
- A friend class grants access to all member functions of the friend class.
- Friendship is not automatically inherited.
- A class granting friendship does not automatically become a friend in return.
- Use friendship only when there is a good design reason.

## 10. Practice Questions

1. What is a friend function?
2. Is a friend function a member of a class?
3. Can a friend function access private members?
4. Does a friend function have a `this` pointer?
5. What is a friend class?
6. Differentiate between a friend function and a member function.
7. Is friendship inherited?
8. Is friendship reciprocal?
9. Write a program in which a friend function adds private values from two classes.
10. Explain two advantages and two disadvantages of friend functions.

---

**Next Topic:** Static Data Members and Static Member Functions in C++
