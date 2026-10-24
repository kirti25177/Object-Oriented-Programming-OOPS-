# Exception Handling in C++

## 1. What Is Exception Handling?

**Exception handling** is a mechanism used to handle runtime errors so that a program can respond to unexpected situations instead of terminating abnormally.

Examples:
- Division by zero (when explicitly detected by the program).
- Invalid input.
- Accessing a file that cannot be opened.
- A problem occurring during an operation.

C++ provides three main keywords for exception handling:

- `try`
- `throw`
- `catch`

## 2. The `try` Block

The `try` block contains code that might throw an exception.

```cpp
try {
    // Code that may throw an exception
}
```

## 3. The `throw` Keyword

The `throw` keyword is used to signal an exception.

```cpp
throw 10;
```

This throws an integer value, which can be handled by a matching `catch` block.

## 4. The `catch` Block

The `catch` block handles an exception thrown from the associated `try` block.

```cpp
catch (int error) {
    cout << "Exception caught: " << error;
}
```

The parameter type should match the thrown type or be compatible with it.

## 5. Basic Example

```cpp
#include <iostream>
using namespace std;

int main() {
    try {
        throw 10;
    }
    catch (int error) {
        cout << "Exception caught: " << error;
    }

    return 0;
}
```

**Output:**
```text
Exception caught: 10
```

**Explanation:**
1. The program enters the `try` block.
2. `throw 10` throws an integer exception.
3. Control transfers to the matching `catch (int error)` block.
4. The exception is handled, and the program continues after the exception-handling construct.

## 6. Example: Handling Division by Zero

C++ does not automatically throw an exception for integer division by zero. We can check for it ourselves.

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 0;

    try {
        if (b == 0) {
            throw "Division by zero is not allowed";
        }

        cout << a / b;
    }
    catch (const char* message) {
        cout << message;
    }

    return 0;
}
```

**Output:**
```text
Division by zero is not allowed
```

**Explanation:** The program checks whether the divisor is zero before performing division. If it is zero, it throws a message that is handled by the matching `catch` block.

## 7. Multiple `catch` Blocks

A program can have multiple `catch` blocks to handle different exception types.

```cpp
#include <iostream>
using namespace std;

int main() {
    try {
        throw 3.14;
    }
    catch (int error) {
        cout << "Integer exception";
    }
    catch (double error) {
        cout << "Double exception";
    }
    catch (...) {
        cout << "Unknown exception";
    }

    return 0;
}
```

**Output:**
```text
Double exception
```

**Explanation:** The thrown value is a `double`, so the `catch (double error)` block handles it.

The `catch (...)` block is a catch-all handler and should generally be placed after more specific handlers.

## 8. Rethrowing an Exception

An exception can be rethrown from within a `catch` block using `throw;`. This allows another handler further up the call stack to handle it.

```cpp
#include <iostream>
using namespace std;

int main() {
    try {
        try {
            throw 5;
        }
        catch (int error) {
            cout << "Caught inside" << endl;
            throw;
        }
    }
    catch (int error) {
        cout << "Caught outside";
    }

    return 0;
}
```

**Output:**
```text
Caught inside
Caught outside
```

## 9. Stack Unwinding

**Stack unwinding** occurs when an exception propagates out of a scope. Local objects in exited scopes are destroyed automatically as control leaves those scopes.

This helps clean up resources managed by objects, such as local objects that follow RAII (Resource Acquisition Is Initialization).

## 10. Exception Handling vs Normal Error Checking

| Feature | Exception handling | Normal error checking |
|---|---|---|
| Main mechanism | `try`, `throw`, `catch` | Conditions such as `if` |
| Control flow | Transfers to a matching handler | Usually follows explicit branches |
| Best use | Exceptional failures | Expected conditions and routine validation |

## 11. Important Exam Points

1. `try` contains code that may throw an exception.
2. `throw` signals an exception.
3. `catch` handles a matching exception.
4. Multiple `catch` blocks can handle different types.
5. `catch (...)` catches any exception type.
6. A rethrow uses `throw;` inside a handler.
7. Stack unwinding destroys local objects as exception propagation exits their scopes.
8. C++ does not automatically throw an exception for integer division by zero.

## 12. Quick Revision

- **`try`:** Encloses potentially exception-throwing code.
- **`throw`:** Signals an exception.
- **`catch`:** Handles a matching exception.
- **Multiple handlers:** Handle different exception types.
- **Rethrowing:** Passes an exception to an outer handler.
- **Stack unwinding:** Cleans up local objects while leaving scopes during exception propagation.

