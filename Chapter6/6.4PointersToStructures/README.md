# 6.4 – Pointers to Structures  
## SDLC Documentation and Process

### 1. **Requirement:**
As a C programmer, I want to learn how to use pointers to access and manipulate structure data. I will dynamically allocate memory for a structure, use the pointer to assign values, and print the values using the arrow operator (`->`).

### 2. **Design:**
- Define a structure `Car`:
  - `char model[30]`
  - `int year`
  - `float price`
- Use `malloc()` to allocate memory for a `Car` pointer.
- Use `->` to set structure members.
- Print the data using the pointer.
- Free the memory after use.

### 3. **Implementation:**
- **Sprint 1:** Create the `Car` structure definition.
- **Sprint 2:** Use `malloc()` to allocate memory for a `Car*`.
- **Sprint 3:** Use the pointer and `->` to assign values.
- **Sprint 4:** Print the car info and call `free()` to clean up.

### 4. **Testing:**

- Ensure the fields are correctly set and printed.
- Test with different car models and years.
- Use `valgrind` (optional) to verify there are no memory leaks.

### 5. **Deployment:**
   - gcc .\6.4CarPointer.c -o .\6.4CarPointer
   - .\6.4CarPointer

### 6. **Maintenance: **
   - Add more fields like manufacturer, mileage.
   - Extend to handle an array of Car structures using pointers.
   - Accept user input for dynamic initialization.