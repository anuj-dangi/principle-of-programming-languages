# Principles of Programming Languages - C Language Exploration

This repository contains lecture notes, code examples, and explanations for various concepts in the C programming language. It's designed to help understand how C works under the hood, from memory management to compilation and linking.

## 📚 Table of Contents

### 📜 Language Concepts & History

*   **[Why C Was Developed](./why-C-was-developed.md)**: A look into the history and motivation behind the creation of the C language.
*   **[C vs. Pascal](./c-vs-pascal.md)**: An explanation of why C became more popular than Pascal for system and application development.
*   **[Programming Language Purposes](./programming-languages-purposes.md)**: A brief overview of the different purposes of programming languages.

### 🔧 C Programming Fundamentals

*   **[Header Files in C](./header-files-in-c/how-to-create-header-file.md)**: Learn how to create and use header files (`.h`) to organize your code.
*   **[Function Sharing Between Files](./function-sharing/function-sharing-and-werror.md)**: Understand how to share functions across multiple `.c` files and use the `-Werror` flag for safer compilation.
*   **[Pointers](./pointers/)**: A collection of examples and explanations about pointers in C.
*   **[Operators in C](./operator/)**: Explore C operators and their precedence.
*   **[Sequence Control](./sequence-control/)**: Learn about sequence control and precedence in C.
*   **[scanf & printf](./scanf&printf.md)**: Notes on using `scanf` and `printf` for input/output.

### 🧩 Logic Puzzles

*   **[Sum and Product Logic Puzzle](./sum-product-logic-puzzle.md)**
*   **[General Logic Puzzle](./logic-puzzle.md)**

## 🚀 Getting Started

To compile and run the C code examples in this repository, you will need a C compiler like `gcc`.

### Compilation

You can compile a single C file using the following command:

```bash
gcc -o output_filename source_file.c
```

For projects with multiple source files, you need to include all of them in the compilation command:

```bash
gcc -o output_filename main.c another_file.c
```

### Running the code

Once compiled, you can run the executable like this:

```bash
./output_filename
```

---
Happy Coding! 🚀
