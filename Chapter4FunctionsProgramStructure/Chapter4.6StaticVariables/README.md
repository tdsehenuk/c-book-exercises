# 4.6 – Static Variables
## SDLC Documentation and Process

### 1. **Requirement:**
   As a user, I want a function that keeps track of how many times it has been called, using a static variable.

### 2. **Design:**
   - Create a function `void counter()` with a static variable `count`.
   - Each time the function is called, increment and print the value.
   - Call the function 5 times in a loop from `main()`.

### 3. **Implementation:**
   - **Sprint 1**: Create `4.6Static.c` file with skeleton.
   - **Sprint 2**: Declare `static int count = 0;` inside `counter()`.
   - **Sprint 3**: Use a loop in `main()` to call `counter()` 5 times.

### 4. **Testing:**
   - Confirm the output counts from 1 to 5 across multiple function calls.
   - Ensure that `count` does not reset between calls.

### 5. **Deployment:**
   - gcc 4.6counter.c -o4.6counter.exe
   - .\4.6counter.exe
   
### 6. **Maintenance:**
   - Ensure the function is self-contained.
   - Optionally modify it to return `count` or allow reset via parameters.