
# 🔍 `%p` vs `%d` for Pointers in C

This document explains the difference between using `%p` and `%d` when printing pointer values in C.

---

## ✅ `%p` — Correct Way to Print Pointers

- **Used for**: Printing memory addresses (pointers).
- **Format**: Typically prints in hexadecimal.
- **Example**:
  ```c
  int x = 10;
  int *p = &x;
  printf("%p", (void *)p); // Correct and portable
  ```

- **Why use `(void *)`?**: `%p` expects a `void*` argument. Most compilers allow passing any pointer, but casting makes it explicitly safe.

---

## ❌ `%d` — Incorrect for Pointers

- **Used for**: Printing `int` values (signed 4-byte integers).
- **Incorrect Usage**:
  ```c
  int x = 10;
  int *p = &x;
  printf("%d", p); // ❌ Wrong: pointer passed, but %d expects int
  ```

- **Problems**:
  - On 64-bit systems, pointers are 8 bytes, while `%d` only takes 4 bytes.
  - Causes **undefined behavior** and possibly truncated or garbage output.

---

## 🧪 Common Confusion

Even on a 64-bit OS, you might see `sizeof(pointer) == 4` if:

- You're using a 32-bit compiler.
- You're building with `-m32` flag (GCC/Clang).

Check your build target:
```c
#include <stdio.h>

int main() {
    printf("Pointer size: %zu bytes\n", sizeof(void *));
    return 0;
}
```

---

## 📊 Summary Table

| Format Specifier | Use Case         | Safe for Pointers? | Output Format |
|------------------|------------------|---------------------|----------------|
| `%p`             | Print pointers   | ✅ Yes              | Hexadecimal address |
| `%d`             | Print integers   | ❌ No               | Signed decimal int  |

---

## ✅ Best Practice

- Always use `%p` with pointers.
- Optionally cast the pointer to `(void *)` for safety.
- Avoid `%d` or `%x` for pointers unless explicitly casting (and knowing the risk).

