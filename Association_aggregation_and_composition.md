# Association, Aggregation, and Composition in C++

These three concepts describe relationships between classes and objects in Object-Oriented Programming.

## 1. Association

**Association** is a relationship in which two independent classes interact with or are connected to each other.

- Both objects can exist independently.
- One object may use or communicate with another.
- It represents a general relationship between objects.

### Example: Teacher and Student

```cpp
#include <iostream>
using namespace std;

class Student {
public:
    void study() {
        cout << "Student is studying." << endl;
    }
};

class Teacher {
public:
    void teach(Student& s) {
        cout << "Teacher is teaching." << endl;
        s.study();
    }
};

int main() {
    Student s;
    Teacher t;

    t.teach(s);

    return 0;
}
```

**Output:**
```text
Teacher is teaching.
Student is studying.
```

**Explanation:** The teacher interacts with the student, but both can exist independently.

## 2. Aggregation

**Aggregation** is a special type of association that represents a weak *has-a* relationship.

- One class contains or refers to an object of another class.
- The contained object can exist independently of the container.
- Destroying the container does not necessarily destroy the contained object.

### Example: Department and Professor

```cpp
#include <iostream>
using namespace std;

class Professor {
public:
    string name;

    Professor(string n) {
        name = n;
    }
};

class Department {
public:
    Professor* professor;

    Department(Professor* p) {
        professor = p;
    }

    void showProfessor() {
        cout << professor->name;
    }
};

int main() {
    Professor p("Amit");
    Department d(&p);

    d.showProfessor();

    return 0;
}
```

**Output:**
```text
Amit
```

**Explanation:** The department refers to a professor, but the professor exists independently of the department.

## 3. Composition

**Composition** is a strong *has-a* relationship in which one object owns another object's lifetime.

- The contained object is treated as a part of the owning object.
- Its lifetime is tied to the owner's lifetime in the composition model.
- It represents a strong ownership relationship.

### Example: Car and Engine

```cpp
#include <iostream>
using namespace std;

class Engine {
public:
    Engine() {
        cout << "Engine created." << endl;
    }

    ~Engine() {
        cout << "Engine destroyed." << endl;
    }
};

class Car {
private:
    Engine engine;

public:
    Car() {
        cout << "Car created." << endl;
    }

    ~Car() {
        cout << "Car destroyed." << endl;
    }
};

int main() {
    Car c;
    return 0;
}
```

**Output:**
```text
Engine created.
Car created.
Car destroyed.
Engine destroyed.
```

**Explanation:** The `Engine` is a data member of `Car`. It is constructed before the `Car` constructor body executes and destroyed after the `Car` destructor body executes.

## 4. Difference Between Association, Aggregation, and Composition

| Feature | Association | Aggregation | Composition |
|---|---|---|---|
| Relationship | General connection | Weak has-a | Strong has-a |
| Object independence | Independent | Part can exist independently | Part's lifetime is tied to owner |
| Ownership | Not implied | Weak or shared relationship | Strong ownership |
| Example | Teacher and Student | Department and Professor | Car and Engine |

## 5. Easy Way to Remember

- **Association:** Teacher interacts with Student.
- **Aggregation:** Department has a Professor who can exist independently.
- **Composition:** Car owns an Engine as a part of its structure.

## 6. Important Exam Points

1. Aggregation and composition are specialized forms of association.
2. Aggregation represents a weak *has-a* relationship.
3. Composition represents a strong ownership relationship.
4. In aggregation, the contained object can exist independently of the container.
5. In composition, the contained object's lifetime is tied to its owner in the composition model.
6. In C++, these relationships are design concepts; they are not enforced by special keywords.

