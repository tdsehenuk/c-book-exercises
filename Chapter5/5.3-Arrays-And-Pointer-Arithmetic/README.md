# Section: 5.3-Arrays-And-Pointer-Arithmetic
This folder contains code and problems from K&R Chapter 5.
# 5.3 - Arrays of Pointers

## SDLC Documentation and Process

---

### 1. **Requirement:**

As a learner, I want to understand how arrays can be used in combination with pointers, specifically how an array of pointers can store multiple strings. This will help me in understanding how to work with dynamic collections of data such as strings and their memory management.

---

### 2. **Design:**

The program will:
- Declare an array of pointers, where each pointer points to a string.
- Iterate over the array using a loop and print each string.

This demonstrates how pointers can be used to refer to different elements in an array, and how to access and manipulate string data stored in memory.

---

### 3. **Implementation Plan:**

- **Sprint 1:** Declare an array of pointers to strings, and initialize it with a few strings.
- **Sprint 2:** Use a loop to iterate through the array and print each string.
- **Sprint 3:** Ensure that the program correctly prints the individual strings.

---

### 4. **Testing:**

- Verify that each word in the array is printed correctly.
- Try modifying the program to include more or fewer strings to ensure it handles arrays of varying sizes.
- Edge Case: Use an empty string or a string with special characters.

---

### 5. **Deployment:**

This is a simple C program that can be compiled and executed locally. To run the program:

```bash
gcc array_of_pointers.c -o array_of_pointers.exe
./array_of_pointers.exe

### 6. **Maintenance and Extensions**

---
- Use `malloc` or `calloc` to allocate memory for each string dynamically.

--- 