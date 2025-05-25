# 4.5 – Header Files
## SDLC Documentation and Process

### 1. **Requirement:**
   As a developer, I want to separate function declarations into a `.h` file and their implementation into a `.c` file. This will help me organize code into reusable modules and support larger programs. 
   Think of WCU Java Classes

### 2. **Design:**
   - Create a header file `mathutils.h` with a declaration of a function: `int add(int a, int b);`
   - Create an implementation file `mathutils.c` where the function is defined.
   - In `main.c`, include `mathutils.h` and use the `add()` function to add two numbers.

### 3. **Implementation:**
   - **Sprint 1**: Create three files:
     - `mathutils.h` (declaration)
     - `mathutils.c` (implementation)
     - `main.c` (running program)
   - **Sprint 2**: Implement the `add()` function in `mathutils.c`.
   - **Sprint 3**: Use `#include "mathutils.h"` in `main.c` to call `add()`.

### 4. **Testing:**
   - Add two known numbers (e.g., `5` and `7`) and ensure the result is correct.
   - Test with negative numbers and zero.
   - Ensure all files compile correctly and are linked during compilation.

### 5. **Deployment:**
   - gcc .\4.4Scope.c -o .\4.4Scope.exe
   - gcc .\4.4Scope.exe

### 6. **Maintenance:**
   - Header files should contain **only declarations**, not definitions.
   - Use include guards (`#ifndef/#define/#endif`) to prevent multiple inclusions.
   - Extend `mathutils.h` later with more math functions (e.g., `multiply()`, `factorial()`).
   - Consider organizing headers in a separate `/include` folder in larger projects.