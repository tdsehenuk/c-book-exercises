# 5.8 – Command-Line Arguments  
## SDLC Documentation and Process

---

### 1. **Requirement:**
As a user, I want to understand how command-line arguments are passed to a C program so I can read input directly from the terminal. This will help with scripting, automation, and general C proficiency.

---

### 2. **Design:**
- Use the standard `int main(int argc, char *argv[])` signature.
- Print the number of arguments passed.
- Loop through all command-line arguments using pointer arithmetic — not array indexing.
- Print each argument on a new line.

---

### 3. **Implementation (Sprints):**
- **Sprint 1**: Create `5.8Args.c` and set up skeleton `main()` with `argc` and `argv`.
- **Sprint 2**: Print the number of command-line arguments.
- **Sprint 3**: Use pointer arithmetic to traverse and print each argument.
- **Sprint 4**: Add comments and clean up output formatting.

---

### 4. **Testing:**
- Compile the program and run it with different argument sets:
  ```bash
  ./5.8Args one two three

### 5. **Deployment**
gcc 5.8Args.c -o 5.8Args
./5.8Args arg1 arg2 arg3


### 6. **Maintenance:**
Count how many arguments match a certain pattern.
Reverse the order of arguments before printing.
Filter arguments based on length or character content.