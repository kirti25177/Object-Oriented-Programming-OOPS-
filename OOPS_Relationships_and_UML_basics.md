# OOP Relationships and UML Basics

## 1. What Is UML?

**UML (Unified Modeling Language)** is a standard visual language used to represent the design and structure of a software system.

It helps developers understand how classes, objects, and relationships fit together before writing code.

### Why Is UML Used?

- To visualize software design.
- To understand relationships between classes.
- To communicate system structure.
- To plan and document software projects.

## 2. UML Class Diagram

A **class diagram** represents classes, their attributes, their methods, and the relationships between them.

A class is usually represented by a rectangle divided into three sections:

1. Class name
2. Attributes (data members)
3. Methods (member functions)

### Example

```text
+----------------------+
|       Student        |
+----------------------+
| - name: string       |
| - age: int           |
+----------------------+
| + display(): void    |
+----------------------+
```

### Visibility Symbols

| Symbol | Meaning | C++ Equivalent |
|---|---|---|
| `+` | Public | `public` |
| `-` | Private | `private` |
| `#` | Protected | `protected` |

Note: UML uses visibility symbols to describe access. C++ uses access specifiers in the class definition.

## 3. Common Relationships in UML

### A. Association

Association shows a general relationship between two classes.

Example: Teacher and Student.

```text
Teacher ---------------- Student
```

The line indicates that the two classes are associated.

### B. Aggregation

Aggregation represents a weak *has-a* relationship. The hollow diamond is placed at the whole or container end.

Example: Department and Professor.

```text
Department ◇----------- Professor
```

The department has a relationship with a professor, who can exist independently.

### C. Composition

Composition represents a strong ownership relationship. The filled diamond is placed at the whole or owner end.

Example: Car and Engine.

```text
Car ◆----------------- Engine
```

The engine is treated as a component owned by the car in this design.

### D. Inheritance (Generalization)

Inheritance represents an *is-a* relationship. UML uses a line with a hollow triangle pointing toward the parent class.

Example: Dog inherits from Animal.

```text
Dog ----------------▷ Animal
```

The hollow triangle points toward the base class, `Animal`.

## 4. Multiplicity in UML

**Multiplicity** indicates how many objects can participate in a relationship.

| Notation | Meaning |
|---|---|
| `1` | Exactly one |
| `0..1` | Zero or one |
| `*` | Zero or more |
| `1..*` | One or more |
| `0..5` | Zero to five |

### Example

```text
Department 1 -------- 0..* Professor
```

This indicates that one department can be associated with zero or more professors. The exact relationship depends on the system being modeled.

## 5. UML Relationship Summary

| Relationship | Meaning | UML Notation |
|---|---|---|
| Association | General connection | Straight line |
| Aggregation | Weak has-a | Hollow diamond |
| Composition | Strong ownership | Filled diamond |
| Inheritance | Is-a | Hollow triangle pointing to parent |

## 6. Important Exam Points

1. UML stands for Unified Modeling Language.
2. A class diagram shows class structure and relationships.
3. `+` means public, `-` means private, and `#` means protected.
4. Aggregation uses a hollow diamond.
5. Composition uses a filled diamond.
6. Inheritance uses a hollow triangle pointing toward the base class.
7. Multiplicity specifies the number of objects involved in a relationship.

## 7. Quick Revision

- **UML:** Visual representation of software design.
- **Class diagram:** Shows classes, attributes, methods, and relationships.
- **Association:** General connection.
- **Aggregation:** Weak has-a relationship.
- **Composition:** Strong ownership.
- **Inheritance:** Is-a relationship.
- **Multiplicity:** Number of objects participating in a relationship.

