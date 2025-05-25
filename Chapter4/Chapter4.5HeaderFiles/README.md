# Exercise 4.5 – Using Header Files in C
## 🔹 Concept: `.h` Files and Code Separation

## SDLC Documentation

### 1. Requirement
As a developer, I want to organize reusable utility functions into header files to maintain clean and scalable code across multiple files.

### 2. Design
   - **mathutils.h**: Contains the function declaration `int add(int a, int b);`
   - **mathutils.c**: Defines the function logic
   - **main.c**: Includes the header and calls the function

### 3. Implementation
   - Created `mathutils.h` with function prototypes
   - Implemented `add()` in `mathutils.c`
   - Called the function in `main.c` with a sample test case

### 4. Testing
   - Tested with: `add(5, 10)` → Output: `Result of 5 + 10: 15`
   - Edge Cases: Tried `add(-3, 3)` → Output: `0`
   - Compile success without warnings or errors

### 5. Deployment
   - gcc main.c mathutils.c -o main
   - ./main

### 6. Maintenance
   - mathutils.h is protected with include guards
   - Additional utility functions can be added to mathutils.c and declared in mathutils.h
   - For larger projects, consider placing headers in a /include directory