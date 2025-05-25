# 6.3 – Arrays of Structures  
## SDLC Documentation and Process

### 1. **Requirement:**
As a learner, I want to create and manipulate an array of structures in C. Specifically, I want to define a `Student` structure and store multiple students in an array. I will print each student's information using a function.

### 2. **Design:**
- Define a `Student` structure with:
  - A character array `name[25]` for the student’s name.
  - An integer `age` for the student's age.
  - A float `gpa` for the student's GPA.
- In `main()`:
  - Declare and initialize an array of `Student` structures.
  - Calculate the array size using `sizeof`.
  - Pass the array and size to `printStudentDetails()` to print each student’s data.

### 3. **Implementation:**
- **Sprint 1:** Define the `Student` structure and declare an array of `Student` variables.
- **Sprint 2:** Initialize the array with 3 students (name, age, GPA).
- **Sprint 3:** Create `printStudentDetails()` to loop through and print each struct.
- **Sprint 4:** Use `sizeof()` to determine array size and call the print function.

### 4. **Testing:**
   - Run the program to verify:
   - Each student’s information is printed correctly.
   - Change student data and re-run to verify flexibility.
   - Try reducing/increasing array size and observe results.

### 5. **Deployment:**
   - gcc .\6.3arrays_of_structures.c -o .\6.3arrays_of_structures.exe
   - .\6.3arrays_of_structures

### 6. **Maintence:**
   - Update the structure if more student details are needed (e.g., major, ID).
   - Allow user input to populate the array dynamically.
   - Extend with search or sorting functionality.