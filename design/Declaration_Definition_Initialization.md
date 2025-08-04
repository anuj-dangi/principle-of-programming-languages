
# 📘 Declaration vs Definition vs Initialization in Programming

This document explains the key differences between **declaration**, **definition**, and **initialization** of variables in programming, along with their associated **binding times**.

---

## 🔹 Declaration

- **What Happens**: Introduces the variable to the compiler — provides its **name** and **type**.
- **Binding Involved**:
  - Variable name → Type
  - Sometimes assigned a **logical/symbolic address**
- **Example**:
  ```c
  extern int x; // Declaration in C
  ```

---

## 🔹 Definition

- **What Happens**: Allocates memory for the variable; its **size** is known and storage is reserved.
- **Binding Involved**:
  - Type → Size
  - Variable name → Physical or virtual address
- **Example**:
  ```c
  int x; // Definition in C
  ```

---

## 🔹 Initialization

- **What Happens**: Assigns an initial **value** to the variable.
- **Binding Involved**:
  - Variable → Value
  - Value → Actual memory content
- **Example**:
  ```c
  int x = 10; // Initialization
  ```

---

## ✅ Summary Table

| Phase          | What is Bound                                      |
|----------------|-----------------------------------------------------|
| Declaration    | Variable name → Type (and possibly logical address) |
| Definition     | Type → Size, Name → Physical/virtual address        |
| Initialization | Variable → Value                                    |

---

> 📌 **Note**: In some languages like C/C++, declaration and definition can happen separately or together. In others like Python or JavaScript, declaration usually implies definition.
