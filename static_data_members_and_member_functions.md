# Static Data Members and Member Functions in C++

## 1. What Is a Static Data Member?

A **static data member** belongs to the class itself rather than to individual objects.

- Only one shared copy exists for the entire class.
- All objects of the class share the same static variable.
- It is generally defined outside the class using the scope resolution operator `::`.

### Example

```cpp
#include <iostream>
using namespace std;

class Student {
public:
    static int count;
};

int Student::count = 0;

int main() {
    Student s1, s2;

    s1.count++;
    s2.count++;

    cout << Student::count;
    return 0;
}
```

**Output:**
```text
2
```

**Explanation:** Both objects share the same `count` variable. Each increment changes that shared variable.

## 2. What Is a Static Member Function?

A **static member function** belongs to the class rather than to a particular object.

- It can be called using the class name.
- It can directly access only static data members and other static member functions.
- It does not have a `this` pointer because it is not associated with a specific object.

### Example

```cpp
#include <iostream>
using namespace std;

class Student {
public:
    static int count;

    static void showCount() {
        cout << count;
    }
};

int Student::count = 10;

int main() {
    Student::showCount();
    return 0;
}
```

**Output:**
```text
10
```

## 3. Static vs Non-Static Members

| Feature | Static member | Non-static member |
|---|---|---|
| Belongs to | Class | Individual object |
| Number of copies | One shared copy | Separate copy per object |
| Access | Class name or object | Object |
| `this` pointer | Not available in static functions | Available in non-static functions |
| Direct access to non-static data | Not allowed in static functions | Allowed |

## 4. Why Do We Use Static Members?

Static members are useful when information must be shared across all objects of a class.

Examples:
- Counting the number of objects created.
- Maintaining a common value shared by all objects.
- Providing utility functions that do not require a particular object.

### Example: Counting Objects

```cpp
#include <iostream>
using namespace std;

class Student {
public:
    static int count;

    Student() {
        count++;
    }
};

int Student::count = 0;

int main() {
    Student s1, s2, s3;

    cout << "Number of objects: " << Student::count;
    return 0;
}
```

**Output:**
```text
Number of objects: 3
```

Each time a `Student` object is constructed, the constructor increments the shared `count`.

## 5. Important Exam Points

1. A static data member is shared by all objects of the class.
2. A static member function can be called without creating an object.
3. A static member function cannot directly access non-static data members.
4. Static member functions do not have a `this` pointer.
5. Static data members are commonly defined outside the class using `ClassName::memberName`.
6. Static members can be accessed using the class name, such as `Student::count`.

## 6. Quick Revision

- **Static variable:** One shared copy for the class.
- **Static function:** A class-level function that can directly access static members.
- **Scope resolution operator (`::`):** Used to define a static data member outside its class and to access class members by class name.

