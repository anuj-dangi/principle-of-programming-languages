# Sum and Product Puzzle

## 🧠 Logic Puzzle Description

This is a classic logic puzzle involving two professors—**Prof. A** and **Prof. B**—each of whom knows different pieces of information about two secret numbers.

### 🔢 The Setup

Two natural numbers \( x \) and \( y \) are chosen such that:

- \( 2 \leq x < y \leq 99 \)

Then:
- **Prof. A** is told the **sum** \( S = x + y \)
- **Prof. B** is told the **product** \( P = x \times y \)

The following conversation occurs:

---

### 🗣️ Conversation

1. **Prof. B:** "I don't know what the numbers are."

2. **Prof. A:** "I knew you didn't know."

3. **Prof. B:** "Now I know what the numbers are!"

4. **Prof. A:** "Now I also know what the numbers are!"

---

## 🧩 The Objective

Determine the two numbers \( x \) and \( y \).

---

## ✅ Solution Logic

### Step-by-Step Reasoning:

1. **Prof. B says "I don't know"**  
   ⇒ The product \( P \) must have **more than one** pair of factors \((x, y)\) within the allowed range.

2. **Prof. A says "I knew you didn't know"**  
   ⇒ For the sum \( S \), **all possible pairs** \((x, y)\) that sum to \( S \) must have ambiguous products—none of which are uniquely factorizable into one valid pair.

3. **Prof. B says "Now I know"**  
   ⇒ Given the above knowledge, Prof. B finds that **only one** of the product’s factorizations fits Prof. A's statement.

4. **Prof. A says "Now I also know"**  
   ⇒ Given that B could now determine the numbers, and knowing only the sum, Prof. A also pinpoints the correct pair.

---

## 🧮 Final Answer

> ### The numbers are **4 and 13**  
> - **Sum** = 17  
> - **Product** = 52

This is the **only pair** in the range \( 2 \le x < y \le 99 \) that satisfies all four statements in the conversation.

---

## 🧑‍💻 Notes

- This puzzle showcases the power of **recursive reasoning** and mutual knowledge.
- It has been featured in many logic problem books and programming challenges.
