# How to Create and Use a `.h` File in C

## 1. Create the Header File

A header file contains **declarations** (not definitions).

**mathlib.h**

```c
#ifndef MATHLIB_H   // include guard (prevents multiple inclusion)
#define MATHLIB_H

int add(int a, int b);      // function declaration
int subtract(int a, int b);

#endif
```

---

## 2. Create the Implementation File

Write the **definitions** in a `.c` file.

**mathlib.c**

```c
#include "mathlib.h"  // include your header

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}
```

---

## 3. Use the Header in Your Main Program

Include your header in the main source file.

**main.c**

```c
#include <stdio.h>
#include "mathlib.h"  // include the header

int main() {
    printf("sum is %d\n", add(5, 1234));
    return 0;
}
```

---

## 4. Compile the Project

Compile both source files together:

```bash
gcc main.c mathlib.c -o program
```

**Why include both `main.c` and `mathlib.c`?**

* `main.c` uses functions declared in `mathlib.h`, but the **actual definitions** are in `mathlib.c`.
* GCC needs to compile both files and **link them together** to produce an executable.
* If you only compile `main.c`, the linker will not find the implementation of `add()` and `subtract()`, causing errors.

Run the program:

```bash
./program
```

**Output:**

```
sum is 1239
```

---

## 5. Common Error: Implicit Declaration Warning

If you see:

```
warning: implicit declaration of function 'add'
```

It means the compiler did not see the declaration before usage.

✅ Fix: Make sure to `#include "mathlib.h"` at the **top** of `main.c`.

---

## ✅ Summary

* `.h` → declarations (interface)
* `.c` → definitions (implementation)
* Always use include guards (`#ifndef ... #define ... #endif`) or `#pragma once`
* Compile **all source files** together to produce the final executable
* Include both `main.c` and any helper `.c` files so the linker can resolve all function definitions
