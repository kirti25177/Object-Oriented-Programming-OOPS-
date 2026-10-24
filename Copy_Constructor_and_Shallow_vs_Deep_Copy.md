# Copy Constructor and Shallow vs Deep Copy in C++

## 1. What Is a Copy Constructor?

A **copy constructor** is a special constructor that initializes a new object using an existing object of the same class.

### Syntax

```cpp
ClassName(const ClassName& other);
```

- `ClassName` is the name of the class.
- `const ClassName& other` refers to the existing object.
- The reference avoids making an unnecessary copy of the source object.

## 2. Example of a Copy Constructor

```cpp
#include <iostream>
using namespace std;

class Student {
public:
    int age;

    Student(int a) {
        age = a;
    }

    Student(const Student& other) {
        age = other.age;
    }
};

int main() {
    Student s1(20);
    Student s2 = s1;

    cout << s2.age;
    return 0;
}
```

**Output:**

```text
20
```

### Explanation

1. `s1` is created with an age of `20`.
2. `Student s2 = s1;` initializes a new object using `s1`.
3. The copy constructor copies `s1.age` into `s2.age`.

**Important:** Copy initialization, such as `Student s2 = s1;`, invokes a copy constructor when a new object is initialized from an existing object. It is different from assigning to an already-existing object.

## 3. Default Copy Constructor

If you do not define a copy constructor, the compiler can implicitly declare one for your class.

The implicitly defined copy constructor copies each base-class and member subobject from the source object. For pointer members, this copies the pointer value, not the dynamically allocated data it points to.

### Example

```cpp
#include <iostream>
using namespace std;

class Student {
public:
    int age;
};

int main() {
    Student s1;
    s1.age = 20;

    Student s2 = s1;

    cout << s2.age;
    return 0;
}
```

**Output:**

```text
20
```

The compiler-generated copy constructor copies the `age` member.

## 4. What Is Shallow Copy?

A **shallow copy** copies the values of the object's data members as they are.

When an object has a pointer member, a shallow copy copies the address stored in the pointer. Both objects may then point to the same memory.

### Example

```cpp
#include <iostream>
using namespace std;

class Demo {
public:
    int* ptr;

    Demo(int value) {
        ptr = new int(value);
    }

    ~Demo() {
        delete ptr;
    }
};

int main() {
    Demo d1(10);
    Demo d2 = d1;  // Shallow copy

    cout << *d1.ptr << endl;
    cout << *d2.ptr << endl;

    return 0;
}
```

Both objects initially point to the same integer, so the output before destruction is:

```text
10
10
```

**Important:** This example has a memory-management bug. Both objects own the same pointer, so both destructors attempt to delete the same allocation. This can cause undefined behavior. Do not use this shallow-copy design when both objects independently own the allocated memory.

## 5. What Is Deep Copy?

A **deep copy** duplicates the dynamically allocated data so that the copied object has its own separate memory.

### Example

```cpp
#include <iostream>
using namespace std;

class Demo {
public:
    int* ptr;

    Demo(int value) {
        ptr = new int(value);
    }

    Demo(const Demo& other) {
        ptr = new int(*other.ptr);
    }

    ~Demo() {
        delete ptr;
    }
};

int main() {
    Demo d1(10);
    Demo d2 = d1;

    *d2.ptr = 50;

    cout << *d1.ptr << endl;
    cout << *d2.ptr << endl;

    return 0;
}
```

**Output:**

```text
10
50
```

### Explanation

- `d1` owns one dynamically allocated integer containing `10`.
- The copy constructor allocates another integer and copies the value.
- `d2` has its own memory.
- Changing `d2.ptr` does not affect `d1.ptr`.

## 6. Shallow Copy vs Deep Copy

| Feature | Shallow Copy | Deep Copy |
|---|---|---|
| Pointer value | Address is copied | Separate memory is allocated |
| Dynamic data | May be shared | Duplicated |
| Memory independence | Not independent for pointed-to data | Independent for duplicated data |
| Double-delete risk | Possible with shared ownership and incorrect cleanup | Avoided when ownership is implemented correctly |
| Implementation | Often compiler-generated memberwise copy | Requires appropriate copying logic or a suitable owning type |

## 7. Copy Constructor vs Assignment Operator

| Feature | Copy constructor | Copy assignment operator |
|---|---|---|
| Purpose | Initializes a new object | Assigns to an existing object |
| Example | `Student s2 = s1;` | `s2 = s1;` |
| Object already exists? | No, a new object is being initialized | Yes |

Both operations may need custom implementations when a class directly manages resources such as dynamically allocated memory.

## 8. The Rule of Three

If a class manually manages a resource and needs a custom implementation of any one of these:

1. Destructor
2. Copy constructor
3. Copy assignment operator

it will often need all three to manage copying and cleanup correctly.

Modern C++ also has move constructors and move assignment operators. This leads to the **Rule of Five**. When possible, resource-managing classes can use standard library types such as `std::vector` and `std::unique_ptr` to avoid writing manual memory-management code.

## 9. Important Exam Points

1. A copy constructor initializes a new object from an existing object.
2. The conventional parameter is `const ClassName&`.
3. A compiler-generated copy constructor performs memberwise copying.
4. Copying a raw pointer copies its address, not the pointed-to object.
5. Deep copying duplicates the dynamically allocated data.
6. Shallow copying can cause unintended sharing and double deletion when both objects attempt to own the same allocation.
7. Copy construction and copy assignment are different operations.

## 10. Quick Revision

- **Copy constructor:** Creates a new object from an existing object.
- **Shallow copy:** Copies member values, including pointer addresses.
- **Deep copy:** Creates independent copies of dynamically allocated data.
- **Copy assignment:** Assigns values to an existing object.
- **Rule of Three:** Destructor, copy constructor, and copy assignment operator.

