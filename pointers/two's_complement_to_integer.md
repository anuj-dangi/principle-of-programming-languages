# 🔄 Converting Two's Complement to Integer

This guide explains how to convert a two's complement binary number to its decimal integer equivalent.

---

## ✅ Case 1: MSB (Most Significant Bit) is `0` — Positive Number

If the leftmost bit is `0`, the binary number is **positive**. Simply convert it to decimal normally.

### Example:

```
Binary:  0101 (4-bit)
Decimal: 5
```

---

## ✅ Case 2: MSB is `1` — Negative Number

If the leftmost bit is `1`, the binary number is **negative** in two's complement format. Use the following steps to convert:

### 🔄 Conversion Steps:

1. **Invert all bits** (change 1s to 0s and 0s to 1s)
2. **Add 1** to the result
3. Convert the result to decimal
4. Add a minus (`-`) sign

### Example:

Convert `11100100` (8-bit)

#### Step 1: Invert all bits

```
11100100 → 00011011
```

#### Step 2: Add 1

```
00011011 + 1 = 00011100
```

#### Step 3: Convert to decimal

```
00011100 = 28
```

#### Final Answer:

```
Two's complement 11100100 = -28 (decimal)
```

---

## 📊 Summary Table

| Binary         | MSB | Type     | Decimal |
| -------------- | --- | -------- | ------- |
| `0110`         | 0   | Positive | `6`     |
| `1110` (4-bit) | 1   | Negative | `-2`    |
| `10000000`     | 1   | Negative | `-128`  |

---

## ℹ️ Note

* For **n-bit** two's complement numbers:

  ```
  Range: -2^(n-1) to 2^(n-1) - 1
  ```

  Example: 8-bit signed integers range from `-128` to `+127`.
