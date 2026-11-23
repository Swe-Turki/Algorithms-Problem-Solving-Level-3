# Algorithms & Problem-Solving – Level 3 🚀

This repository contains my homework solutions and practical exercises for the third level of the Algorithms & Problem-Solving course in C++.

---

## 📌 Source

The problems in this repository are from:

- **Course:** Algorithms & Problem-Solving – Level 3
- **Instructor:** Dr. Mohammed Abu-Hadhoud
- **Platform:** Programming Advices

> 💡 **Note:** Each homework file number corresponds directly to the lesson/problem number in the course.

---

## 🎯 Learning Outcomes

By completing these problems, I was able to apply the following concepts:

### 🔢 2D Arrays (Matrices)

- **Fill & print matrices** with random or ordered numbers, formatted with `setw()`.
- **Sum rows, columns, and the whole matrix**, and store the sums in a 1D array.
- **Matrix operations:** transpose, multiply two matrices, and print the middle row/column.
- **Search inside a matrix:** count a number, check if it exists, find intersected numbers, and find min/max values.

### 🔁 Loops & Recursion

- **Fibonacci series** printed using a normal loop and using recursion.
- **Nested loops** to walk through every row and column.

### 🔤 Characters

- **Check and convert case** with `isupper()`, `islower()`, `toupper()`, and `tolower()`.
- **Invert letter case** for a single character and for a whole string.
- **Count letters:** capital vs. small letters, a specific letter with or without match case.
- **Vowels:** check if a character is a vowel, then count and print all vowels in a string.
- **Punctuation:** detect it with `ispunct()` and remove it from a string.

### 🧵 Strings

- **Read full lines** with `getline(cin, ...)`.
- **Words:** print the first letter of each word, upper/lower first letters, print each word, and count words.
- **Split** a string into a `vector<string>` using `find()`, `substr()`, and `erase()` with any delimiter.
- **Join** a `vector<string>` or an array back into one string with a delimiter (function overloading).
- **Reverse words** in a string.
- **Replace words** using the built-in `replace()` and with a custom split/join method that supports match case.

### 🗂️ Structs & Records

- **Model data** with a `struct` (`sClient`: account number, PIN code, name, phone, balance).
- **Convert a record to a line** with a separator (`#//#`) and **a line back to a record** using split + `stod()`.
- **Store many records** in a `vector<sClient>` and pass it by reference.

### 📁 Files

- **Open files** with `fstream` in different modes: `ios::in` (read), `ios::out` (overwrite), and `ios::app` (append).
- **Write** client records to a file line by line.
- **Read** a file line by line and load it into a vector.
- **CRUD operations:** add, list, find, delete (remove from the vector then rewrite the file), and update client records.

### 🧹 Clean Code

- **Break down problems** into small, reusable functions with clear names.
- **Use default parameters** (e.g. separator, match case) and **pass by reference** to avoid extra copies.

---

## 📂 Problems Overview

| Range | Topic |
| --- | --- |
| `Problem01` – `Problem05` | Random 3x3 matrix, row sums and column sums |
| `Problem06` – `Problem10` | Ordered matrix, transpose, multiplication, middle row/col, matrix sum |
| `Problem11` – `Problem16` | Equal, typical, identity, scalar, and sparse matrices + number count |
| `Problem17` – `Problem20` | Number exists, intersected numbers, min/max, palindrome matrix |
| `Problem21` – `Problem22` | Fibonacci series (loop and recursion) |
| `Problem23` – `Problem30` | First letters, upper/lower case, invert case, count capital/small letters |
| `Problem31` – `Problem36` | Count a letter, vowels, print each word, count words |
| `Problem37` – `Problem44` | Split, trim, join, reverse words, replace words, remove punctuation |
| `Problem45` – `Problem51` | Client records: struct ⇄ line, file save/load, find, delete, update |

---

## 📚 My Own Library (`MyLib.h`)

While solving these problems, I noticed that I kept writing the same helper functions again and again. So I built my own reusable header library and included it in my solutions instead of repeating code.

- **File:** `../Header Files/MyLib.h`
- **Namespace:** all functions live inside `namespace MyLib` to avoid name conflicts (e.g. `MyLib::ReadString()`).
- **Protection:** uses `#pragma once` so it is only included once.

### 🧰 What It Provides

- **Input helpers:** read numbers (with input validation using `cin.fail()`), strings, and characters, with or without a custom message.
- **Character helpers:** general utilities like inverting a character's case.
- **String helpers:** general utilities like splitting a string by any delimiter and joining a `vector<string>` back together.

### 💡 What I Learned From It

- **Reusability:** write a function once and use it in any project.
- **Separation of code:** keep shared helpers in a header file and keep each problem focused on its own logic.
- **Function overloading:** the same function name with different parameters (e.g. `ReadNumber()` / `ReadNumber(message, number)`).
- **Growing the library:** every time I solve a general problem, I can add it to `MyLib` to use it later.

---

## ⚙️ How to Run

To compile and run any file locally:

```bash
g++ -o Problem01 Problem01.cpp
./Problem01
```
