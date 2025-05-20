# 4.10 – Recursion
## SDLC Documentation and Process

### 1. **Requirement:**
   Write a recursive function to compute factorial of an integer.

### 2. **Design:**
   - Define a function `int factorial(int n)`:
     - If `n <= 1`, return 1.
     - Else return `n * factorial(n - 1)`
   - Test with `factorial(5)` in `main()`.

### 3. **Implementation:**
   - **Sprint 1**: Create `main.c`
   - **Sprint 2**: Write recursive factorial function.
   - **Sprint 3**: Call from `main()` and print result.

### 4. **Testing:**
   - Check `factorial(0)` = 1
   - Check `factorial(5)` = 120
   - Try larger values (e.g. 10) and verify result.

### 5. **Deployment:**
   Compile with:

   
### 6. **Maintenance:**
- Add error handling for negative inputs.
- Explore iterative alternatives for performance.
- Add memoization (advanced).