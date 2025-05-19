# 4.3 – External Variables
## SDLC Documentation and Process

### 1. **Requirement:**
   As a user, I want to learn how to use global (external) variables in C so I can manage shared state across functions.

### 2. **Design:**
   A global variable `int counter = 0;` should be declared outside of all functions. A function `increment()` should add 1 to this counter. From `main()`, we will call `increment()` multiple times and print the result.

### 3. **Implementation:**
   - **Sprint 1**: Create `4.3GlobalCounter.c` file with skeleton.
   - **Sprint 2**: Declare a global variable `int counter = 0;`.
   - **Sprint 3**: Write `increment()` that modifies the global variable.
   - **Sprint 4**: In `main()`, call `increment()` a few times and print the final result.

### 4. **Testing:**
   - call `increment()` 3 times from `main()` and ensure that `counter` increases correctly (expected output is 3).
   - Try printing the value before and after calling the function to confirm state change.

### 5. **Deployment:**
   For learning purposes: run locally using: 
   - gcc .\4.3Variables.c -o .\4.3Variables.exe
   - .\4.3Variables.exe

### 6. **Maintenance:**
   Since `counter` is a global variable, it's accessible and its state can be accessed from anywhere in the file. 
   This is risky for larger programs. In future updates, we should consider:
     - Making `counter` static and exposing accessor functions.
     - Moving the counter logic into its own file (e.g., `counter.h` / `counter.c`) for encapsulation ().