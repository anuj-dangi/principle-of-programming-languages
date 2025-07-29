
# 🛠️ How to Create and Use a Header File in C

---

## 📁 Overview

This guide explains how to create and use a **header file (`.h`)** in C, and also answers a common question:  
**Why do we use `#include <...>` vs `#include "..."`?**

Example files used in this guide:
- `main.c` — Main program
- `header.h` — Custom header file containing the `add()` function

---

## 📄 Step-by-Step: Creating a Header File

### ✅ Step 1: Create the Header File

Create a file named `header.h` with the following content:

```c
int add(int x, int y)
{
    return x + y;
}
```

> Note: Normally, header files **only contain function declarations**, not definitions. But for this simple demo, the full definition is inside the header.

---

### ✅ Step 2: Include the Header in Your C File

In `main.c`, include the header file using double quotes:

```c
#include <stdio.h>
#include "header.h"

int main()
{
    printf("sum is %d\n", add(5, 1234));
    return 0;
}
```

---

### ✅ Step 3: Compile and Run

```bash
gcc main.c -o program
./program
```

---

## 🧠 Why `#include <...>` vs `#include "..."`?

| Syntax               | Used For                | Search Location |
|----------------------|--------------------------|-----------------|
| `#include <stdio.h>` | System header files      | System directories like `/usr/include` |
| `#include "header.h"`| Your own header files    | First checks current directory, then system |

### 🔍 Detailed Explanation:

- `#include <...>` is used for **standard library headers** like `stdio.h`, `stdlib.h`, etc.
- `#include "..."` is used for **user-defined headers** like `header.h`.

📌 If you write:
```c
#include "header.h"
```
The compiler:
1. First looks in the **current directory**.
2. If not found, then looks in **system include paths**.

---

## ✅ Best Practices

| Practice                          | Why It Matters                            |
|----------------------------------|--------------------------------------------|
| Use `#include <...>`             | For standard/system headers                |
| Use `#include "..."`             | For your own custom/project headers        |
| Separate declaration and logic   | Keep declarations in `.h`, definitions in `.c` |

---

## 🏁 Summary

- Header files help you **organize and reuse** function declarations.
- `#include <...>` → for system headers.
- `#include "..."` → for your own files.
- Follow best practices to build scalable and clean C projects.

---

Happy Coding! 🚀
