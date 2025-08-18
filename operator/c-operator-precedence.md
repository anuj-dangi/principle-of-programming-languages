# C Operator Precedence and Associativity

Operator precedence determines the order in which operators are evaluated in an expression. Associativity specifies the direction of evaluation when operators of the same precedence appear together.

---

## Operator Precedence Table (Highest to Lowest)

| Precedence | Operator(s)                                         | Description                                                                                   | Associativity   |
|------------|-----------------------------------------------------|-----------------------------------------------------------------------------------------------|-----------------|
| 1          | `()`   `[]`   `->`   `.`                           | Function call, Array subscripting, Structure dereference, Member access                       | Left-to-Right   |
| 2          | `++`   `--`                                        | Postfix increment & decrement                                                                 | Left-to-Right   |
| 3          | `++`   `--`   `+`   `-`   `!`   `~`   `(type)`   `*`   `&`   `sizeof` | Prefix increment/decrement, Unary plus/minus, Logical NOT, Bitwise NOT, Type cast, Dereference, Address-of, Sizeof | Right-to-Left   |
| 4          | `*`   `/`   `%`                                    | Multiplication, Division, Modulus                                                             | Left-to-Right   |
| 5          | `+`   `-`                                          | Addition, Subtraction                                                                         | Left-to-Right   |
| 6          | `<<`   `>>`                                        | Bitwise shift left, Bitwise shift right                                                       | Left-to-Right   |
| 7          | `<`   `<=`   `>`   `>=`                           | Relational operators                                                                          | Left-to-Right   |
| 8          | `==`   `!=`                                        | Equality, Inequality                                                                          | Left-to-Right   |
| 9          | `&`                                                | Bitwise AND                                                                                   | Left-to-Right   |
| 10         | `^`                                                | Bitwise XOR                                                                                   | Left-to-Right   |
| 11         | `|`                                                | Bitwise OR                                                                                    | Left-to-Right   |
| 12         | `&&`                                               | Logical AND                                                                                   | Left-to-Right   |
| 13         | `||`                                               | Logical OR                                                                                    | Left-to-Right   |
| 14         | `?:`                                               | Ternary conditional                                                                           | Right-to-Left   |
| 15         | `=`   `+=`   `-=`   `*=`   `/=`   `%=`   `<<=`   `>>=`   `&=`   `^=`   `|=` | Assignment operators                                                                          | Right-to-Left   |
| 16         | `,`                                                | Comma operator                                                                                | Left-to-Right   |

---

## Notes
- **Parentheses `()`** can always be used to override precedence.
- **Associativity** only matters when operators of the same precedence appear together.

### Meaning of Associativity
- **Left-to-Right**: The expression is evaluated from left to right when operators of the same precedence appear.
  - Example: `a - b - c` is evaluated as `(a - b) - c`.
- **Right-to-Left**: The expression is evaluated from right to left when operators of the same precedence appear.
  - Example: `a = b = c` is evaluated as `a = (b = c)`.

---

### Example
```c
int x = 10, y = 5, z;
z = x + y * 2;   // Multiplication has higher precedence → z = 10 + (5 * 2) = 20

z = (x + y) * 2; // Parentheses override → z = (10 + 5) * 2 = 30

z = x - y - 2;   // Left-to-Right associativity → (10 - 5) - 2 = 3

x = y = 7;       // Right-to-Left associativity → x = (y = 7), so y = 7, x = 7
```

---

## Visual Guide: Evaluation Order

### Left-to-Right Associativity
```
a - b - c - d
|__|
   result1 - c - d
   |_______|
            result2 - d
            |__________|
                     final result
```

### Right-to-Left Associativity
```
a = b = c = d
        |__|
           result1
    |___________|
         result2
|________________|
    final result
```

This shows how operators of the same precedence are grouped based on associativity.
