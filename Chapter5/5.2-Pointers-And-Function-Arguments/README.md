# 5.2 – Pointers and Function Arguments  
## SDLC Documentation and Process

### 1. **Requirement:**
As a learner, I want to understand how pointers can be used to modify function arguments so I can avoid passing copies and make changes directly to variables.

### 2. **Design:**
The function `swap(int *a, int *b)` should:
- Accept two pointers to integers
- Swap the values they point to using a temporary variable
In `main()`:
- Declare two integers, `x = 10` and `y = 20`
- Pass their addresses to `swap()`
- Print the values before and after to show they were successfully swapped

### 3. **Implementation Plan:**
- **Sprint 1:** Define the `swap()` function with pointer parameters
- **Sprint 2:** Use a temporary variable to perform the swap:  
  `temp = *a; *a = *b; *b = temp;`
- **Sprint 3:** In `main()`, declare `x` and `y`, print initial values
- **Sprint 4:** Call `swap(&x, &y)` and print the final values

### 4. **Testing:**
- Run the program and verify:
  - Before swap: `x = 10`, `y = 20`
  - After swap: `x = 20`, `y = 10`
- Try with negative numbers or equal values (e.g., `x = 5`, `y = 5`)
- Edge Case: Attempt to swap with one or both pointers pointing to the same variable

### 5. **Deployment:**
   - gcc .\5.2passingPointers.c -o .\5.2passingPointers.exe
   - .\5.2passingPointers.exe

### 6. **Maintenance and Extensions:**
- Adapt `swap()` to support `float`, `double`, or even `char`.
- Explore using macros or `void*` to make a generic swap function.
- Add unit tests for various value pairs using a framework like **CUnit**.
- Use tools like `gcov`/`lcov` to measure how well your tests exercise the code logic.