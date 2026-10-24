# Templates in C++

## 1. What Are Templates?

**Templates** allow us to write generic code that works with different data types without rewriting the same logic for each type.

For example, we can create one function that adds two integers, two floats, or two doubles.

### Why Do We Use Templates?

- Code reusability.
- Less code duplication.
- Support for multiple data types.
- Type safety through compile-time type checking.

C++ has two main types of templates:

1. Function templates
2. Class templates

## 2. Function Templates

A **function template** defines a generic function that can work with different data types.

### Syntax

```cpp
template <typename T>
return_type function_name(T parameter) {
    // Function body
}
```

`typename` can also be replaced with `class` in this template parameter declaration.

### Example

```cpp
#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << add(10, 20) << endl;
    cout << add(2.5, 3.5) << endl;

    return 0;
}
```

**Output:**

```text
30
6
```

**Explanation:**

- When `add(10, 20)` is called, the compiler deduces `T` as `int`.
- When `add(2.5, 3.5)` is called, the compiler deduces `T` as `double`.
- The same function template supports both types.

Note: With this particular function, both arguments must deduce the same `T` unless you explicitly specify the template arguments or design the function to use separate types.

## 3. Function Template with Different Data Types

We can define separate template parameters for different argument types.

```cpp
#include <iostream>
using namespace std;

template <typename T, typename U>
void display(T a, U b) {
    cout << a << " " << b;
}

int main() {
    display(10, 3.5);
    return 0;
}
```

**Output:**

```text
10 3.5
```

Here, `T` is deduced as `int` and `U` as `double`.

## 4. Class Templates

A **class template** allows a class to work with different data types.

### Example

```cpp
#include <iostream>
using namespace std;

template <typename T>
class Box {
private:
    T value;

public:
    Box(T v) {
        value = v;
    }

    void display() {
        cout << value;
    }
};

int main() {
    Box<int> b1(100);
    Box<string> b2("Hello");

    b1.display();
    cout << endl;
    b2.display();

    return 0;
}
```

**Output:**

```text
100
Hello
```

**Explanation:**

- `Box<int>` creates a `Box` that stores an integer.
- `Box<string>` creates a `Box` that stores a string.
- Both use the same class template.

## 5. Multiple Template Parameters

A class template can accept more than one template parameter.

```cpp
#include <iostream>
using namespace std;

template <typename T, typename U>
class Pair {
public:
    T first;
    U second;

    Pair(T a, U b) {
        first = a;
        second = b;
    }

    void display() {
        cout << first << " " << second;
    }
};

int main() {
    Pair<int, string> p(1, "Kirti");
    p.display();

    return 0;
}
```

**Output:**

```text
1 Kirti
```

Here, `T` represents `int` and `U` represents `string`.

## 6. Template vs Function Overloading

| Feature | Templates | Function overloading |
|---|---|---|
| Purpose | Generic code for compatible types | Multiple functions with the same name |
| Code duplication | Usually reduced | May require separate implementations |
| Function definitions | Use template parameters | Each overload has a specific signature |
| Example | `template <typename T>` | `add(int, int)` and `add(double, double)` |

## 7. Important Exam Points

1. Templates support generic programming in C++.
2. A function template works with different data types.
3. A class template allows classes to work with different data types.
4. `typename` and `class` can both introduce type template parameters.
5. Template arguments may be deduced by the compiler for function templates.
6. Class templates commonly require template arguments, such as `Box<int>`.
7. Templates reduce code duplication and provide compile-time type checking.

## 8. Quick Revision

- **Template:** A blueprint for generic code.
- **Function template:** Creates generic functions.
- **Class template:** Creates generic classes.
- **`typename T`:** Declares a type template parameter.
- **Multiple parameters:** Use declarations such as `template <typename T, typename U>`.

