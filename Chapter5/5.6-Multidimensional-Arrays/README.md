# **5.6 – Working with Multidimensional Arrays (using pointers)**

## **SDLC Documentation and Process**

### 1. **Requirement:**
As a learner, I want to understand how to use pointers to access and manipulate elements in a 2D array so that I can work efficiently with matrices and multidimensional data structures in C.

### 2. **Design:**
The program should:
- Declare and initialize a **2D array** (matrix) with values.
- Use **pointer arithmetic** to traverse and print the matrix.
- Modify the matrix elements using pointer arithmetic (e.g., multiply by 2).
- Print the matrix before and after the modification to show the changes.

### 3. **Implementation Plan:**
- **Sprint 1:** Create the file `5.6MatrixPointer.c` and set up the skeleton code (including necessary headers).
- **Sprint 2:** Declare the 2D array and initialize it with values.
- **Sprint 3:** Implement pointer arithmetic to print the original matrix.
- **Sprint 4:** Modify the matrix using pointer arithmetic (e.g., multiply each element by 2).
- **Sprint 5:** Print the modified matrix to confirm the changes.

### 4. **Testing:**
- Ensure the matrix prints correctly before and after modifications.
- Verify that all elements in the matrix are modified (e.g., multiplied by 2).
- Check edge cases with different matrix sizes (e.g., 2x2, 3x3).

### 5. **Deployment:**
   - gcc .\5.6matrix.c -o .\5.6matrix.exe
   - .\5.6matrix.exe

### 6. **Maintenance:**
   - Ensure the program uses pointer arithmetic exclusively to access and modify the matrix elements.
   - Extend the program to support larger matrices or more operations (e.g., matrix addition).