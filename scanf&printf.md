# Why `&` is Used in `scanf` but Not in `printf` in C

---

## 🧩 What's the Difference?

In C, we use `&` (address-of operator) with `scanf`, but **not** with `printf`.

This is because `scanf` is used to **store input** (i.e., write to variables), while `printf` is used to **display output** (i.e., read values).

---

## 📥 `scanf` — Needs the **Address of Variable**

- `scanf` is a **function that writes** a value **into** your variable.
- To do that, it needs to know **where that variable is stored in memory**.
- So you give it the **address** of the variable using the `&` operator.

### ✅ Example:

```c
int x;
scanf("%d", &x);  // Pass the address of x to store the input there
