# 6.8 – Union Usage Example  
## SDLC Documentation and Process

### 1. **Requirement:**
As a C programmer, I want to learn how to use a `union` to store different data types in the same memory space and understand how data overwrites occur when assigning to different union members.

### 2. **Design:**
- Define a union `example` with members:
  - `int i`
  - `float f`
  - `char c[20]`
- Assign values to each member sequentially in `main()`.
- Print the current value of the union member after each assignment to observe data behavior.

### 3. **Implementation:**
- **Sprint 1:** Define the union with the three members.
- **Sprint 2:** Assign an integer to the union and print it.
- **Sprint 3:** Assign a float to the union and print it.
- **Sprint 4:** Assign a string to the union’s `char` array and print it.

### 4. **Testing:**
- Verify the printed values correspond to the most recent assignment.
- Understand that each new assignment overwrites the previous data.
- Confirm program runs without errors or warnings.

### 5. **Deployment:**
   - gcc .\6.8unions.c -o .\6.8unions.exe
   - .\6.8unions.exe

### 6. **Maintenance:**
   - Add more members to the union.
   - Use union within structs for complex data models.
   - Explore practical uses such as memory-efficient data storage.