# Section: 5.10-Pointers-To-Functions
## SDLC Documentation and Process

### 1. **Requirement:**
As a programmer, I want to understand how to use function pointers to call functions indirectly. This will allow me to write more flexible code that can decide which function to call at runtime.

### 2. **Design:**
The program will:
- Declare functions that perform simple operations (like `add` and `subtract`).
- Declare a **function pointer** that can point to these functions.
- Call the functions using the pointer and pass values to see how the pointer directs execution.

### 3. **Implementation:**
- **Sprint 1:** Define two functions (`add` and `subtract`) that take two integer arguments and return an integer result.
- **Sprint 2:** Create a function pointer and assign it to one of the functions.
- **Sprint 3:** Use the function pointer to call the function indirectly, passing it arguments and printing the result.
- **Sprint 4:** Allow the user to choose between `add` and `subtract` via function pointer assignments.

### 4. **Testing:**
- Test calling the function via the function pointer.
- Print results to verify that the correct function is being called and that it behaves as expected.

### 5. **Deployment:**
   - gcc .\5.10pointerFunctions.c -o .\5.10pointerFunctions.exe
   - .\5.10pointerFunctions.exe

### 6. Maintenance:
   - Function pointers can be extended to work with more complex functions, such as functions with multiple parameters or returning different types.