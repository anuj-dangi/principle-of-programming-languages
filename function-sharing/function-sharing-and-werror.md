
# 🧠 Understanding Function Sharing Across Files in C and the `-Werror` Flag

---

## 📁 Overview of Files

This project consists of two files:

- `main.c` — The main program.
- `function.c` — Contains a function definition to be used by `main.c`.

---

## 🔄 Function Sharing Between Files in C

### 🧩 Goal:
To **call a function defined in one `.c` file (`function.c`)** from another `.c` file (`main.c`).

### ✅ How It's Done:
1. **Declare the function** in `main.c` using a prototype:
   ```c
   void printFunction();
   ```

2. **Define the function** in `function.c`:
   ```c
   void printFunction() {
       printf("from printFunction(function sharing)");
   }
   ```

3. **Compile both files together**:
   ```bash
   gcc main.c function.c -o main
   ```

This allows the `main` program to call `printFunction()` even though it's defined in a different file.

---

## 🔐 Making the Function Private with `static`

By default, functions in `.c` files have **global linkage**, meaning they are visible across other compilation units.

### ✅ Using `static`:
You can prevent other files from accessing a function by marking it as `static`:
```c
static void printFunction() {
    printf("Hidden function");
}
```

Now `printFunction` has **internal linkage** — it's local to `function.c` and cannot be used from `main.c`.

Useful for **encapsulation**, to avoid unintended use of helper functions.

---

## ⚠️ The `-Werror` Flag in GCC

### 🧠 What is `-Werror`?

The `-Werror` flag tells the compiler to **treat all warnings as errors**.

#### ✅ Example:
If there's a warning like:
```text
warning: implicit declaration of function ‘printFunction’
```
and you compile with:
```bash
gcc -Werror main.c function.c -o main
```
then the compiler will stop with an **error** instead of just a warning.

### 🚫 Without Function Prototype:
If you forget to declare `printFunction()` in `main.c`, you'll get a warning (or an error with `-Werror`).

This helps enforce **better coding practices** and ensures all warnings are taken seriously during development.

---

## ✅ Best Practices Summary

| Practice | Why It Matters |
|---------|----------------|
| Declare external functions with prototypes | Avoid warnings/errors |
| Compile all needed `.c` files together | Ensure linkage |
| Use `static` for internal helper functions | Hide implementation details |
| Enable `-Werror` during development | Enforce code quality and catch issues early |

---

## 🏁 Final Thoughts

- This pattern demonstrates **modular programming** in C.
- Function declarations and visibility are essential for **clean, maintainable code**.
- Using compiler flags like `-Werror` keeps your project strict and bug-resistant.

---

Happy Coding! 🚀
