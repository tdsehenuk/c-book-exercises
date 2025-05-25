# 4.2 – Function Arguments
## SDLC Documentation and Process

### 1. **Requirement:**
   As a user, I want to be able to understand how function arguments are passed by value in C. This will help me write better code when dealing with function parameters.

### 2. **Design:**
   The function `swap()` should take two integer values and attempt to swap them using a temporary variable. After calling the function from `main()`, print both variables inside `main()` to check if their values changed. I will implement this by following the steps below:
   
   - create a `swap()` function
   - print values before and after the `swap()` to see if they change
   - implement `main()` function to handle the user input and call `swap()`.

### 3. **Implementation:**
   - **Sprint 1**: Create `4.2Swap.c` with a skeleton
   - **Sprint 2**: Setup the function `swap()` that prints the values inside it.
   - **Sprint 3**: Add code to swap values with a temporary variable.
   - **Sprint 4**: Test by calling `swap()` from `main()` and print before and after values to confirm behavior.

### 4. **Testing:**
   - Use sample values like `a = 10` and `b = 20` and test if they correctly swap inside the `swap()` function.
   - Check the printed values inside `main()` to verify that the original variables haven’t changed since they were passed by value.

### 5. **Deployment:**
   - gcc .\4.2Swap.c -o .\4.2Swap.exe 
   - .\4.2Swap.exe

### 6. **Maintenance:**
   - Ensure that the function `swap()` is only working with simple integer values. 
   - Expand to support `float` or `double`.
   - Exapnd by passing references later.
