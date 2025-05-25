# 5.5 – Pointer Arithmetic with Arrays

## SDLC Documentation and Process

### 1. **Requirement:**
   As a user, I want to understand how pointer arithmetic works in C to manipulate array elements directly using pointers. This will help me improve my understanding of pointers and memory management.

### 2. **Design:**
   The program should:
   - Declare an array of integers and initialize it with values.
   - Use pointer arithmetic to access and print the values of the array.
   - Modify the array elements using pointer arithmetic.
   - Print the modified values to verify the changes.
   
   I will implement this by following the steps below:
   - Declare and initialize the array.
   - Traverse the array using pointer arithmetic to print its values.
   - Modify the values in the array using pointer arithmetic.

### 3. **Implementation:**
   - **Sprint 1:** Create `5.5PointerArithmetic.c` with a skeleton layout.
   - **Sprint 2:** Declare and initialize the array of integers.
   - **Sprint 3:** Use pointer arithmetic to print the values of the array.
   - **Sprint 4:** Modify the array elements using pointer arithmetic and print the modified values.

### 4. **Testing:**
   - Use an initial array like `{10, 20, 30, 40, 50}` and verify that pointer arithmetic works for both accessing and modifying array elements.
   - Check if the modified array prints correctly after using pointer arithmetic to double each element.

### 5. **Deployment:**
   This is a simple program with no deployment needed. To run locally:
   - gcc .\5.5pointerArrays.c -o .\5.5pointerArrays.exe
   - .\5.5pointerArrays.exe

### 6. **Maintenance:**
   - Ensure that the program only uses pointer arithmetic to access and modify array elements.
