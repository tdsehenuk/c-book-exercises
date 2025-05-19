 4.4 – Scope Rules
## SDLC Documentation and Process

### 1. **Requirement:**
   As a learner, I want to understand how C handles local and global variables when they share the same name so I can avoid scope conflicts and write clear, bug-free code.

### 2. **Design:**
   - Declare a global variable: `int value = 10;`
   - Inside a function (e.g., `void printValues()`), declare a local variable with the same name: `int value = 20;`
   - Print both the local and global values to understand how scoping works.
   - Use the scope resolution technique to access the global `value` even when the local one is in scope.

### 3. **Implementation:**
   - **Sprint 1**: Create `4.4Scope.c` file with skeleton.
   - **Sprint 2**: Declare `int value = 10;` outside any function (global).
   - **Sprint 3**: In a function, declare `int value = 20;` and print both local and global values.

### 4. **Testing:**
   - Confirm that inside the function, the local variable shadows the global one.
   - Confirm that you can still access the global variable (e.g., by printing it from `main()` or via a separate function).

### 5. **Deployment:**
   - Compile and run locally:
     ```
     gcc .\4.4Scope.c -o .\4.4Scope.exe
     .\4.4Scope.exe
     ```

### 6. **Maintenance:**
   - Consider renaming variables to avoid shadowing.
   - In large codebases, use consistent naming or prefixes (e.g., `g_value`) for globals.
   - Avoid using globals altogether unless shared state is essential.
   - Use `static` or `const` to protect variables when appropriate.