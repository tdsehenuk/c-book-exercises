# 5.1 – Pointer Basics  
## SDLC Documentation and Process

---

### 1. **Requirement:**

As a learner, I want to understand how pointers are declared, initialized, and dereferenced so I can modify the value of a variable indirectly through its memory address.

---

### 2. **Design:**

The function `set_to_zero(int *p)` should:
- Take a pointer to an integer
- Dereference the pointer and set the value at that address to `0`

In `main()`:
- Declare an `int x = 5`
- Pass the address of `x` to `set_to_zero()`
- Print the value before and after the function call

This shows that the value can be changed via its pointer.

---

### 3. **Implementation Plan:**
- **Sprint 1:** Set up a clean `main.c` with a function for `set_to_zero()`
- **Sprint 2:** Initialize `int x = 5` and pass its address to the function
- **Sprint 3:** Inside `set_to_zero()`, use `*p = 0` to modify the value
- **Sprint 4:** Print the value of `x` before and after the call to verify the change

---

### 4. **Testing:**

- Run the program and verify:
  - Before the function: `x = 5`
  - After the function: `x = 0`
- Try with different initial values (`x = 42`, etc.)
- Edge Case: Try passing a pointer to a global or static variable

---

### 5. **Deployment:**

This is a small program meant to be compiled locally with `gcc`:

\`\`\`bash
gcc main.c -o pointerBasicsApp.exe
./pointerBasicsApp.exe
\`\`\`

---

### 6. **Maintenance and Extensions:**

- **Array Manipulation:** Extend `set_to_zero()` to operate on an array of values using a loop.
- **Additional Functions:** Create other pointer-manipulation functions like `increment(int *p)` or `negate(int *p)`.
- **Testing and Coverage:** Consider adding unit tests and code coverage (using `gcov` and `lcov`) to track test completeness.

---