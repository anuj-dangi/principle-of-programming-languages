# C Storage Classes and Runtime Memory Structure

## Storage Classes Overview

Storage classes define **scope, lifetime, visibility, and memory placement** of variables in C.

| Storage Class | Scope (Visibility)    | Lifetime                       | Memory Segment              | Default Initial Value         | Typical Use                                               |
| ------------- | --------------------- | ------------------------------ | --------------------------- | ----------------------------- | --------------------------------------------------------- |
| auto          | Block (local)         | Automatic (function execution) | Stack                       | Garbage (uninitialized)       | Local variables inside functions                          |
| register      | Block (local)         | Automatic (function execution) | CPU registers (if possible) | Garbage                       | Fast-access local variables                               |
| static        | Block (local) or file | Entire program (static)        | Data segment (BSS / Data)   | 0 (if uninitialized)          | Preserve value between function calls; file-local globals |
| extern        | Global (cross-file)   | Entire program                 | Data segment                | Must be initialized elsewhere | Access global variable defined in another file            |

---

## 1. `auto`

* Default storage class for local variables inside a function.
* **Scope:** Only inside the block.
* **Lifetime:** During function execution.
* **Memory:** Stack.
* **Example:**

```c
void func() {
    auto int x = 5;  // auto is optional
}
```

---

## 2. `register`

* Suggests storing the variable in a CPU register.
* **Scope & Lifetime:** Same as `auto`.
* **Memory:** CPU register or stack.
* **Restriction:** Cannot take address (`&var`).
* **Example:**

```c
void func() {
    register int count = 0;
    count++;
}
```

---

## 3. `static`

### a) Local Static Variables

* Declared inside a function.
* **Scope:** Local to function.
* **Lifetime:** Entire program.
* **Memory:** Data segment.
* **Example:**

```c
void counter() {
    static int count = 0;
    count++;
    printf("%d\n", count);
}
```

### b) File-level Static Variables

* Declared outside functions.
* **Scope:** File-only (cannot access from other files).
* **Lifetime:** Entire program.
* **Example:**

```c
static int counter = 0;
void increment() { counter++; }
```

---

## 4. `extern`

* Declares a variable defined in another file.
* **Scope:** Global, cross-file.
* **Lifetime:** Entire program.
* **Memory:** Data segment.
* **Example:**

**globals.c**

```c
int counter = 0;
```

**main.c**

```c
#include <stdio.h>
extern int counter;
int main() {
    counter++;
    printf("%d\n", counter);
}
```

---

## 5. Memory Layout at Runtime

| Segment | Contains                                           |
| ------- | -------------------------------------------------- |
| Text    | Code (functions)                                   |
| Data    | Initialized global/static variables                |
| BSS     | Uninitialized global/static variables              |
| Heap    | Dynamically allocated memory (`malloc`)            |
| Stack   | Local automatic variables (`auto`), function calls |

---

## 6. Summary Table

| Storage Class | Scope               | Lifetime      | Memory Segment     | Default Value     | Notes                                    |
| ------------- | ------------------- | ------------- | ------------------ | ----------------- | ---------------------------------------- |
| auto          | Local (block)       | Function call | Stack              | Garbage           | Default for locals                       |
| register      | Local (block)       | Function call | CPU register/Stack | Garbage           | Hint for speed                           |
| static        | Local / file        | Program       | Data/BSS           | 0                 | Retains value, file-limited if global    |
| extern        | Global / cross-file | Program       | Data               | Defined elsewhere | Declare variable defined in another file |
