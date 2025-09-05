# GCC `-c` and `ar` Commands in C

## 1. GCC `-c` Command

The `-c` option tells GCC to **compile a source file into an object file** without linking.

### Example

```bash
gcc -c bintree.c
```

* Produces `bintree.o` (object file) from `bintree.c`.
* Does **not** create an executable.

### Why use `-c`?

1. **Separate compilation**: Compile multiple `.c` files individually.
2. **Faster builds**: Only recompile changed files.
3. **Modularity**: Object files can later be linked together.

### Linking Example

```bash
gcc main.o bintree.o -o program
```

* Combines `main.o` and `bintree.o` into a runnable executable.

---

## 2. Creating a Static Library with `ar`

`ar` is used to create **static libraries** (`.a`) from object files.

### Command

```bash
ar rcs libmylib.a *.o
```

* `r` = insert/replace object files
* `c` = create the library if it does not exist
* `s` = create an index for faster linking

### Steps

1. Compile source files into object files:

```bash
gcc -c mathlib.c helper.c
```

* Produces `mathlib.o` and `helper.o`

2. Create the static library:

```bash
ar rcs libmylib.a mathlib.o helper.o
```

* Produces `libmylib.a`

3. Use the static library when compiling main program:

```bash
gcc main.c -L. -lmylib -o program
```

* `-L.` tells GCC to look in the current directory for libraries.
* `-lmylib` links against `libmylib.a` (note the `lib` prefix is omitted).

### Why use static libraries?

* Easier reuse of code across multiple projects.
* Reduces clutter from multiple object files.
* Code from the library is copied into the executable at link time.

---

## ✅ Summary

* `gcc -c` → compiles source `.c` files into object `.o` files without linking.
* `ar` → archives multiple object files into a **static library** `.a` for easier reuse.
* Linking combines all object files and/or libraries into a final executable.
